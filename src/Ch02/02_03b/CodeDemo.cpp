// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

/*
Multi
Line
Comment
*/

// multiple variables can be declared on the same line
// a and b are global variables available to all parts of the code
int a, b= 5;

int main(){
    bool my_flag;
    a = 7; // assigning a value to the global variable a
    my_flag = false; // assigning a vale to the local variable my_flag

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    // The result ends up being 2^32 - 2 ... the numbers wrap around
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
