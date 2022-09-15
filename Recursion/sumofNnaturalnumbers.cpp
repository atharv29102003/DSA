#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int sum(int n)
{
    if (n == 0) /*by using recursion*/
        return 0;
    return sum(n - 1) + n;
}
int sum()
{
    int n;
    int s = 0; /*by using for loop*/
    int i;
    for (i = 1; i <= n; n++)
        s = s + i;
    return s;
}
int main()
{
    int r;
    r = sum(5);
    cout << r << endl;
    return 0;
}