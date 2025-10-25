enable_testing()

add_executable(test_mat test_mat.cpp)
target_link_libraries(test_mat PRIVATE mat)
add_test(NAME MatrixTests COMMAND test_mat)
