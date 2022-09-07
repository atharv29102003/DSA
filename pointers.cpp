#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 10;
    cout << a << endl;
    int *p;
    p = &a;
    printf("the value of a is %d", *p);
    return 0;
}