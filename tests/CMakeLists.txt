enable_testing()

add_executable(test_mat test_mat.cpp)
target_link_libraries(test_mat PRIVATE nn)
add_test(NAME MatrixTests COMMAND test_mat)

add_executable(test_nn test_nn.cpp)
target_link_libraries(test_nn PRIVATE nn)
add_test(NAME NNetTests COMMAND test_nn)

add_executable(test_blackjack test_blackjack.cpp)
target_link_libraries(test_blackjack PRIVATE blackjack)
add_test(NAME BJackTests COMMAND test_blackjack)
