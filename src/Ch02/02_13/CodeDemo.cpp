// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>


int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    //Wrie your code here
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate array size
    float sum = 0.0;
    
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    // Calculate average
    result = sum / n;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
