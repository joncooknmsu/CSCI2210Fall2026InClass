#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // vars below are _pointers_, they do not declare space for a string
   char* myStr;
   char* s = "A Constant String";
   // statement below makes myStr point to a string constant, which is
   // an array of characters BUT it is in read-only memory and cannot be
   // modified
   //myStr = "A Constant String";
   // if we want a modifiable version we have to allocate space and then
   // copy the string constant over into the allocated memory
   myStr = (char*) malloc(sizeof(char)*(strlen(s)+1));  // +1 is important!
   strcpy(myStr,s);
   // the function call below would do the same thing, there is no need for
   // the variable "s", it was just a demonstration in class
   //strcpy(myStr,"A Constant String");
   printf("my string is (%s)\n", myStr);
   // remember, if a pointer points to an array, we can use indexing on it
   myStr[5] = 'H'; // works, because the copy is in read/write memory
   printf("my string is (%s)\n", myStr);
   return 0; 
}

