#include "ObjectBuilder.hpp"

#include <boost/json.hpp>
#include <boost/system/detail/errc.hpp>

#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"

#include <fstream>
#include <iostream>
#include <iterator>
#include <streambuf>
#include <string>
#include <cerrno>

namespace KDeTLearning
{

  namespace errc = boost::system::errc;

  std::string getFileContents(const std::string &fileName)
  {

    std::ifstream theFile(fileName.c_str(), std::ios::in | std::ios::binary | std::ios::ate);
    theFile.exceptions(theFile.badbit);

    std::ifstream::pos_type fileSize = theFile.tellg();
    theFile.seekg(0, std::ios::beg);

    std::vector<char> bytes(fileSize);
    theFile.read(bytes.data(), fileSize);

    return std::string(bytes.data(), fileSize);

  }

  void parse(const std::string &fileName)
  {

    boost::json::error_code error;
    boost::json::stream_parser theParser;

    std::string fileContents = getFileContents(fileName);

    theParser.write(fileContents, error);

    if(errc::success == error) {

      theParser.finish(error);

      auto theThing = theParser.release();

      auto theString = boost::json::serialize(theThing);

      std::cout << theString << std::endl;

    } else {

      throw(std::domain_error("Parse error"));

    }
  }

  void tryParseTree(const std::string &fileName)
  {

    boost::property_tree::ptree pt;
    boost::property_tree::read_json(fileName, pt);

    for(auto &v : pt.get_child("particles")) {

      std::cout << v.first << " : " << v.second.data() << std::endl;

    }

   return;

  }
}
