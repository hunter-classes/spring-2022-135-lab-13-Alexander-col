#include <iostream>
#include "funcs.h"
#include <string>

int main()
{
    // std::cout << "Hello World" << std::endl;
    std::cout << "=================================Task A=================================\n" << std::endl;  
    //this is same value for left and right 
    std::cout << "Since left and right have the same value then the same value of 5 will be returned: ";
    std::cout << printRange(5,5) << std::endl;
    std::cout << "Since left is less than right all the values starting at -2 up until 10 should be printed: " << std::endl;

    std::cout << printRange(-2,10) << std::endl;
    std::cout << "\n";


    std::cout << "=================================Task B=================================\n" << std::endl;  
    std::cout << "Since left is less than right all the values starting at -2 up until 10 should be added: " << std::endl;

    int example_b = sumRange(-2,10);
    std::cout << example_b << std::endl;
    std::cout << "\n";

    std::cout << "=================================Task C=================================\n" << std::endl;  
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Since size does not equal 0 all the values in array should be added: " << std::endl;

    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34
    std::cout << "\n";

    std::cout << "=================================Task D=================================\n" << std::endl;  

    std::cout << "Checking to see if ABCD is is Alphanumeric: ";
    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << "Checking to see if Abcd1234xyz is is Alphanumeric: ";
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << "Checking to see if KLMN 8-7-6 is is Alphanumeric: ";

    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)
    std::cout << "\n";
    std::cout << "=================================Task E=================================\n" << std::endl;  

    std::cout << "Checking if ((()))  has matching Parens: ";
    std::cout << nestedParens("((()))") << std::endl;      // true (1)

    std::cout << "Checking if () has matching Parens: ";
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << "Checking if blank has matching Parens: ";

    std::cout << nestedParens("") << std::endl;            // true (1)
    std::cout << "Checking if ((( has matching Parens: ";

    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << "Checking if (() has matching Parens: ";

    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << "Checking if )() has matching Parens: ";

    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << "Checking if a(b)c  has matching Parens: ";

    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)




    

    return 0; 
}