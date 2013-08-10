// An include header for standard output
#include <stdio.h>

/*
  This is a multi-line comment. There can
  be as many lines of text between the start 
  and end of this comment
 */

/*
  How C programs work:
  - operating system loads the program and runs
    the function named 'main'
  - the main function takes two parameters:
    1) an int for the argument count
    2) an array of char * strings for the arguments
  - the main function needs to return an int
 */
int main(int argc, char *argv[])
{
  // variable declaration and assignment on the same line
  int distance = 100;
  
  // print formatter
  printf("You are %d miles away.\n", distance);
  
  // gives the operating system the function's exit value
  return 0;
}
