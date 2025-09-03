// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string> // contains the String Class
#include <cstring> // contains functions to handle character array strings.

int main(){
    // strings as in C
    const size_t LENGTH1 = 25;

    /*
    Constant String
    ---------------
    A sequence of ASCII characters terminated by zero.
    All eight bits of the character after the last space are zero.
    */

    char array_str1[LENGTH1] = "Hey guys! "; // constant string
    char array_str2[] = "What's up?";

    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl; // modified after concatenation

    // strings as in C++

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?";

    // operator overloading with + in the string class
    std::cout << std_str1 + std_str2 << std::endl; 
    
    std::cout << std::endl << std::endl;
    return (0);
}
