#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
double e(int x, int n)
{
    static double s;
    if(n==0)
    return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main()
{
    printf("%lf \n",e(4,25));
    return 0;
}