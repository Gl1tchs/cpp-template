cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "cpp-template")

project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/src)
set(HEADER_DIR ${CMAKE_CURRENT_LIST_DIR}/include)

file(GLOB_RECURSE HEADERS "${HEADER_DIR}/*.hpp")
file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp")

include_directories(${HEADER_DIR})

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
