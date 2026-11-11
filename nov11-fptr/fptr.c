
#include <stdio.h>

int f(int x)
{
   printf("In f: x = %d\n", x);
   return x-3;
}

int g(int x)
{
   printf("In g: x = %d\n", x);
   return x-1;
}

int main()
{
   int r;
   int (* fp)(int);  // C pointer variable that points to a function!
   r = f(5);
   printf("called f: r=%d\n",r);
   r = g(5);
   printf("called g: r=%d\n",r);
   fp = &f;
   r = fp(5);
   printf("called fp: r=%d\n",r);
   fp = &g;
   r = fp(5);
   printf("called fp: r=%d\n",r);
   return 0;
}

