#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("TASK A") 
{
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(0, 3) == "0 1 2 3");
}

TEST_CASE("TASK B") 
{
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);

}

TEST_CASE("TASK C") 
{ 
    int *arr = new int[6]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;


    CHECK(sumArray(arr, 5) == 34);
    CHECK(sumArray(arr, 2) == 29);

    delete[] arr;
    arr = nullptr;
    // to get rid of the allocated memeory 
}

TEST_CASE("TASK D") { 
    CHECK(isAlphanumeric("TUWOMT") == true);
    CHECK(isAlphanumeric("@J1XD5QHTMR") == false);
}

TEST_CASE("TASK E") { 
    CHECK(nestedParens("(())") == true);
    CHECK(nestedParens("") == true);

}