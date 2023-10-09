cmake_minimum_required(VERSION 3.18.4)

file(GLOB_RECURSE SOURCE_FILES
  "*.cpp"
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(SkeletalTestDriver DESCRIPTION "" LANGUAGES CXX)

if (WIN32)
  find_package(dlfcn-win32 REQUIRED)
  set(CMAKE_DL_LIBS dlfcn-win32::dl)
endif ()

set(BOOST_ROOT $ENV{BOOST_HOME})
set(BOOST_INCLUDEDIR ${BOOST_ROOT}/include/)
set(BOOST_LIBRARYDIR %{BOOST_ROOT}/lib/)

add_compile_options(-Wall -pedantic)
add_compile_options(-ggdb3)

add_definitions(-DBOOST_ALL_DYN_LINK)

find_package(Boost 1.81.0 REQUIRED COMPONENTS unit_test_framework json)

set(CMAKE_BUILD_RPATH ${Boost_LIBRARY_DIRS})

include_directories(${Boost_INCLUDE_DIRS})

add_executable(SkeletalTestDriver ${SOURCE_FILES})

target_link_libraries(SkeletalTestDriver ${Boost_LIBRARIES} ${CMAKE_DL_LIBS} stdc++fs)
