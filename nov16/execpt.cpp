
#include <iostream>

int f(int x) {
    if (x < 12)
       throw x;
    return x - 5;
}

int main()
{
    int x = 42;
    try {
        std::cout << f(30) << "\n";
        std::cout << "Hello World!\n";
        std::cout << f(10) << "\n";
    } catch (int e) {
        std::cerr << "Exception! (" << e << ")\n";
    }
    return 0;
}

// Java allows you to declare that you do not
// catch an exception, like, e.g.,
// void myMethod() throws IOEXception
// {...}

// C++ allows you to declare a method as "noexcept"
// which means a method will NOT throw an exception

