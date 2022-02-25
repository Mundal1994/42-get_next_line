# get_next_line

ABOUT

Project to make a function that reads a line ending with a newline character from a file descriptor.

HOW TO RUN TESTS
1. go to the 'test' directory.

		cd test

2. run the command

		make all

3. it should then compile all the functions in the libft folder and the get_next_line.c in the root of directory to create the following in the testfile >> 't1.out', 't2.out', 't3.out', 't4.out', 't5.out', 't6.out' & 'b.out'. Those you can run from the terminal.

4. run the tests one at a time example (replace x with numbers 1-6 (except 3) or replace tx with b to run the test for bonus functions):

		./tx.out

   run test 3 (replace 1 with any number from 1-14):

		./t3.out txt/txt1.txt

   run all test 3:

		make run3

   run all tests (excluding bonus):

		make runall


TESTFILES

I got inspiration from another gnl tests (https://travis-ci.org/yyang42/moulitest) in the creation of this gnl-tester (mainly of how they used the sandbox to compare big files and some of the test ideas). The Makefile and the setup of this test is fully my own creation together with the majority of the tests.