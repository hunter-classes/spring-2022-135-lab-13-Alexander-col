#include <string>
#include <iostream>
#include <cctype>  
#include "funcs.h"


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
// which receives an array (as a pointer to its first element)
// and the size of the array, and should return the sum of its elements. 
// The function itself should not do any new dynamic memory allocations.

int sumArray(int *arr, int size)
{
    int sum = 0; 
    if (size > 0)
    {
        sum += arr[size-1];
        return sum + sumArray(arr, size-1);
    }

    return 0;


}
// which returns true if all characters in the 
// string are letters and digits, 
// otherwise returns false.


bool isAlphanumeric(std::string s)
{
    if(s.length() == 0) 
    { 
        return true; 
    }
     else if(!isalnum(s[0])) 
    { 
        return false; 
    }

    return isAlphanumeric(s.substr(1, s.length()));
}
/*
which returns true if the string is a sequence of nested parentheses:
Strings "", "()", "(())", "((()))" … are all correct sequences and should return true. 
Any other symbols or mismatching parenthesis should make the function return false. */

bool nestedParens(std::string s) 
{
    if(s.length() == 0) 
    { 
        return true; 
    } 
    else if(s[0] == '(' && s[s.length() - 1] == ')') 
    {
        return nestedParens(s.substr(1, s.length() - 2));
    } 
    else 
    { 
        return false;
    }
}