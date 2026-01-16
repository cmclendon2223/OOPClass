#include <iostream>
#include <string>

int main(void)
{
    std::string str = "Hello";

    std::cout << str << std::endl;
    std::cout << "The string size is " << str.size() << std::endl;

    // append

    str += " world";

    std::cout << str << std::endl;
    std::cout << "The string size is " << str.size() << std::endl;

    
    return 0;
}