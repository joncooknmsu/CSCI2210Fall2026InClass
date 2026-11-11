
#include <iostream>
#include <string>

template <typename T>
class Point
{
 private:
   T x;
   T y;
 public:
   Point(T x, T y) : x{x}, y{y} {}
   void print() {
      std::cout << "point(" << x << "," << y << ")\n";
   }
};

int main()
{
   Point<int> intpt(6,7);
   Point<int>* ip;
   intpt.print();
   Point<float> floatpt(6.3,7.1);
   floatpt.print();
   // intpt = floatpt;  ERROR
   // ip = &floatpt; ERROR
   ip = &intpt;
   ip->print();
   return 0;
}

