// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>


int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    //Write your code here
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate array size
    //by dividing the array size by the size of a single element.

    float sum = 0.0;
    
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    // Calculate average
    result = sum / n;
    
    std::cout << "The average is " << result << std::endl;
    std::cout << "The size of nums is " << sizeof(nums) << " in bytes" << std::endl;
    std::cout << "The size of each element is " << sizeof(nums[0]) << " in bytes" << std::endl;
    std::cout << "The number of elements is " << n << " in total element count"<< std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
