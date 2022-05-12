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
    return output;

}

// that computes the sum of all numbers in range left ≤   x   ≤ right. 
// (Don’t use loops, global or static variables.)

int sumRange(int left, int right)
{
    int sum =0; 
    if(left == right)
    {
        sum += right;
        return sum;
    }
    else if(left < right)
    {
        sum += left;
        return sum + sumRange(left+1,right);
    }

    return 0;
}