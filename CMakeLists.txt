cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(Example C)

include("${CMAKE_CURRENT_SOURCE_DIR}/cgv/cmake/CGitVersion.cmake")

add_subdirectory(cgv)  # or cgv_add_subdirectory()

add_executable(example "${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")
target_link_libraries(example c_git_version)

find_package(Doxygen)
if (DOXYGEN_FOUND)
    doxygen_add_docs(docu)
    cgv_doxygen_add_version_hook(docu)
endif()
