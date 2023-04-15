add_executable(cmd src/main.cpp)
target_include_directories(cmd PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)
target_link_libraries(cmd PRIVATE core)

