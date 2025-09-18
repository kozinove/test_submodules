create_executable_test_project(my_tests)
#set(TARGET my_tests)
#
#file(GLOB_RECURSE TARGET_SRC "*.c*")
#file(GLOB_RECURSE TARGET_HD "*.h*")
#add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})
#
#target_link_libraries(${TARGET} gtest my_lib)
#target_include_directories(${TARGET} PUBLIC "${CMAKE_SOURCE_DIR}/src")
#
#include(GoogleTest)
#add_test(NAME ${TARGET} COMMAND ${TARGET})