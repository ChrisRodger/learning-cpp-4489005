// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The cow at index 0 is " << cattle.begin()->get_name() << std::endl;
    std::cout << "The cow at index 1 is " << cattle[1].get_name() << std::endl;
    std::cout << "The cow at index 2 is " << prev(cattle.end(), 2)->get_name() << std::endl;

    // end points one past the last element in the vector

    std::cout << "The cow at index 3 is " << (cattle.end() - 1)->get_name() << std::endl;

    std::cout << "The size of the cow vector is " << cattle.size() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
