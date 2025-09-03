// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> // this is a preprocessor directive
#include <string>
#include <cstdint>

#define CAPACITY 5000 // act like find and replace, don't end with semicolon, known as a macro
#define DEBUG //Useful for debugging using ifdef preprocessor

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif

    large += small; // Shorthand for "large = large + small;"
    std::cout << "The large integer is " << large << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
