#include <iostream>
using namespace std;

int recursive_sum(int m, int n)
{
    if(m == n)
    {
        return m;
    }
    return m + recursive_sum(m + 1, n);

    return 0;
}

int main()
{
    int m = 2;
    int n = 4;
    int sum = 0; 

    for (int i = m; i <= n; i++)
    {
        sum += i; 
    }

    cout << "sum = "<< sum << endl;
    int example = recursive_sum(2,4);
    cout << "sum = "<< example << endl;



    return 0;
}