// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    // Write your code here
    result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    std::cout << "The value of result is: " << result << std::endl;
    result /= 5;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
