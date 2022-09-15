#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1; /*by using recursion*/
    return fact(n - 1) * n;
}
int Ifact(int n)
{
    int f = 1, i; /*by using loops*/
    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}
int main()
{
    int r = Ifact(0);
    cout << r << endl;
    return 0;
}