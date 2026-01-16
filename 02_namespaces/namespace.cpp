// Working with namespaces

#include <iostream>

// create a namespace
namespace first 
{
    int a;
}

namespace second 
{
    int a;
}



int main(void)
{
    first::a = 10;
    second::a = 5;
    std::cout << "first a is" << first::a << std::endl;
    std::cout << "second a is" << second::a << std::endl;
    return 0;
}