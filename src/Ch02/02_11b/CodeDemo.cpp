// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    // 5/9 is a constant expression which the compiler takes care of, result 0
    // Need to cast to float or use decimal numbers
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    float weight = 10.99; // double
    //using double results in more accurate fractional representation
    //double weight = 10.99

    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int) weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
