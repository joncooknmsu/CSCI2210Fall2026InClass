#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char* myStr;
   char* s = "A Constant String";
   //myStr = "A Constant String";
   myStr = (char*) malloc(sizeof(char)*(strlen(s)+1));
   strcpy(myStr,s);
   printf("my string is (%s)\n", myStr);
   myStr[5] = 'H';
   printf("my string is (%s)\n", myStr);
   return 0; 
}  
