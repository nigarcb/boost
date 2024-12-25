cmake_minimum_required(VERSION 3.29)
project(jojo)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.40 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES($ {Boost_INCLUDE_DIR})

add_executable(jojo main.cpp boost.cpp)


TARGET_LINK_LIBRARIES( jojo Boost::program_options )
