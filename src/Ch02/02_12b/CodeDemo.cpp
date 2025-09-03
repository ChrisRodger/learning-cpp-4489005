// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//enum cow_purpose {dairy, meat, hide, pet}; // c-style enumeration
//enum grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // can't redefine

// enum classes are strongly typed

enum class cow_purpose {dairy, meat, hide, pet}; // c++ style enumeration
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    cow_purpose a;
    grocery_section b;
    grocery_section c;

    a = cow_purpose::meat;
    b = grocery_section::meat;
    c = grocery_section::bakery;

    // cout is not defined for cow_purpose type, therefore need to cast a to int
    std::cout << "a = " << (int) a << std::endl;
    std::cout << "b = " << (int) b << std::endl;
    std::cout << "c = " << (int) c << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
