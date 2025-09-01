// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8; // a is a small integer
    auto b = 12345678901; // b is a very large integer that exceeds 32 bits, 11 digit number
    auto c = 3.14f; // c is a float with the trailing f, constant specifier for floats
    auto d= 3.14; // d is a float without the trailing f, fp constants are doubles by default
    auto e = true; // e is a boolean constant true, which is one
    auto f = 'd'; // a single character d, enclosed with single quotes
    auto g = "C++ rocks!"; // strings are enclosed by double quotes

    std::cout << "The type of a is " << typeid(a).name() << std::endl;
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl; // pointer to const char, fancy name for string
    std::cout << std::endl << std::endl;
    return (0);
}
