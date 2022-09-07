#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct Rectangle r = {15, 16};
    printf("%d \n", sizeof(r));
    printf("%d \n", r.length);
    printf("%d \n", r.breadth);
    return 0;
}