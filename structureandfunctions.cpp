#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
};
int perimeter(struct Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main()
{
    Rectangle r;
    printf("Enter length and breadth");
    cin >> r.length >> r.breadth;
    int a = area(r);
    int peri = perimeter(r);

    cout << "Area \n"
         << a
         << "\n perimeter \n"
         << peri;
    return 0;
}