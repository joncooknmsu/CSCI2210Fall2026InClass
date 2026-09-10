
// header files are included in order to
// define things that are external, such
// as the C++ "I/O Stream library"
// (I/O == Input/Output)
#include <iostream>

// Note: all things in the iostream and many 
// other C++ "standard" libraries are in 
// the C++ namespace "std". My code will 
// explicitly use the "std::" prefix 
// properly refer to these things. Our 
// textbook suggests to use the statement
// "using namespace std;" so that you do not
// have to do this, but this is BAD PRACTICE

// All C++ programs begin at the "main" function
int main(int argc, char** argv)
{
   // cout is the output object in the 
   // iostream library
   std::cout << "Hello World!\n";
   return 0;
}

