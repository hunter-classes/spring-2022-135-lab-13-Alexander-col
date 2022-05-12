#include <iostream>
#include "funcs.h"
#include <string>


int main()
{
    std::cout << "Hello World" << std::endl;
    std::cout << "=================================Task A=================================" << std::endl;  
    //this is same value for left and right 
    std::cout << printRange(5,5) << std::endl;

    std::cout << printRange(-2,10) << std::endl;

    std::cout << "=================================Task b=================================" << std::endl;  
    int example_b = sumRange(-2,10);
    std::cout << example_b << std::endl;

    

    return 0; 
}