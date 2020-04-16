cmake_minimum_required(VERSION 3.16)
project(FinalTest)

include_directories(C:/Users/Thiago Souto/Documents/CLionProjects/FinalTest/lib/pkgconfig)
find_library(FinalTest_lib FinalTest)

#group the libraries
set(frameworks ${FinalTest_lib})

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
set(SOURCE_FILES main.cpp)

add_executable(FinalTest ${SOURCE_FILES})

target_link_libraries(FinalTest gtest gtest_main)