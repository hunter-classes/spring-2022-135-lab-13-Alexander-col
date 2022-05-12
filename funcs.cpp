#include <iostream> 
#include <string>

// that prints all numbers in range left ≤   x   ≤ right, 
// separated by spaces. (Don’t use loops, global or static variables.)

// Instead of a void function, make the function return as std::string 
// and you can then compare that with the desired output in your tests.
std::string printRange(int left, int right)
{
    std::string output = "";
    if (left == right)
    {
        output += std::to_string(left);
        return output;
    }
    else if(left < right)
    {
        output += std::to_string(left) + " ";

    return output + printRange(left+1,right);
    }


}