
#include <iostream>

class A {
 private:
    int x,y;
 public:
    A(int ix, int iy) : x{ix}, y{iy} {}
    void printMe() {
       std::cout << "object A, x=" << x << " y=" << y << "\n";
    }
};

int main()
{
   A a(4,3);       // a IS an object (a variable that CONTAINS an object of A)
   A* ap = new A(7,8);  // ap is NOT an object but POINTS TO an object
   a.printMe();    // a IS an object, so we can invoke the method directly
   ap->printMe();  // must follow the pointer to the object to invoke printMe()
   return 0;
}

