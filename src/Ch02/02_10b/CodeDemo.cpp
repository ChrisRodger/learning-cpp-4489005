// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; // without trailing f, is a double constant. IDE knows this - hover over value.
    sgn = flt; // value is truncated, float to int
    unsgn = sgn; // twos complement value of 7, 2^32 - 7

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
