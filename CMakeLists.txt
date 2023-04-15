cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "cpp-template")

option(BUILD_TESING "Should project build with testing?" ON)

project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory(src/core)
add_subdirectory(src/cmd)

if(BUILD_TESING)

set(VENDOR_DIR ${CMAKE_CURRENT_LIST_DIR}/vendor)

add_subdirectory(${VENDOR_DIR}/Catch2)

file(GLOB_RECURSE TEST_SOURCES tests/*.cpp)

add_executable(${PROJECT_NAME}-tests ${TEST_SOURCES})

target_link_libraries(${PROJECT_NAME}-tests PRIVATE Catch2::Catch2WithMain core)
target_include_directories(${PROJECT_NAME}-tests PRIVATE ${HEADER_DIR})

include(CTest)
include(Catch)

catch_discover_tests(${PROJECT_NAME}-tests)
endif()
