cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(Example C)

add_subdirectory(cgv)

add_executable(example "${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")
target_link_libraries(example c_git_version)

find_package(Doxygen)
if (DOXYGEN_FOUND)
    doxygen_add_docs(docu)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cgv/cmake/DoxygenGitVersion.cmake")
    add_doxygen_version_hook(docu)
endif()
