cmake_minimum_required(VERSION 3.0.0)
project(Word-Search VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/src")
 
# add the executable
add_executable(Word-Search src/Word-Search.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
