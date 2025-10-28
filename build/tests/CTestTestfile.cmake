# CMake generated Testfile for 
# Source directory: /Users/michaelbacchus/projects/blackjack/blackjack-nn/tests
# Build directory: /Users/michaelbacchus/projects/blackjack/blackjack-nn/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[MatrixTests]=] "/Users/michaelbacchus/projects/blackjack/blackjack-nn/build/bin/test_mat")
set_tests_properties([=[MatrixTests]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;5;add_test;/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;0;")
add_test([=[NNetTests]=] "/Users/michaelbacchus/projects/blackjack/blackjack-nn/build/bin/test_nn")
set_tests_properties([=[NNetTests]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;9;add_test;/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;0;")
add_test([=[BJackTests]=] "/Users/michaelbacchus/projects/blackjack/blackjack-nn/build/bin/test_blackjack")
set_tests_properties([=[BJackTests]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;13;add_test;/Users/michaelbacchus/projects/blackjack/blackjack-nn/tests/CMakeLists.txt;0;")
