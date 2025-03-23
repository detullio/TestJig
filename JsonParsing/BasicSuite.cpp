#include "ObjectBuilder.hpp"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SkeletalTestDriver)

BOOST_AUTO_TEST_CASE(JsonParser)
{

  try {

  
    KDeTLearning::parse();


  } catch(std::exception &anException) {

    BOOST_FAIL(anException.what());

  }


}

BOOST_AUTO_TEST_CASE(PropertyTreee)
{

  try {

  
    KDeTLearning::tryParseTree();


  } catch(std::exception &anException) {

    BOOST_FAIL(anException.what());

  }


}

BOOST_AUTO_TEST_SUITE_END()
