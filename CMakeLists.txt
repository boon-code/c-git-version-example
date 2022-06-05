cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(Example C)

add_subdirectory(cgv)
add_executable(example "${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")
target_include_directories(example PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/cgv/inc")
target_link_libraries(example c_git_version)
