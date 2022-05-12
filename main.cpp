#include <iostream>
#include "funcs.h"
#include <string>


int main()
{
    std::cout << "Hello World" << std::endl;
    //this is same value for left and right 
    std::cout << printRange(5,5) << std::endl;

    std::cout << printRange(2,9) << std::endl;

    return 0; 
}