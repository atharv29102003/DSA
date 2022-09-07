#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int area(int length, int breadth)
{
    return length * breadth;
};
int perimeter(int length, int breadth)
{
    int p;
    p = 2 * (length + breadth);
    return p;
}
int main()
{
    int length = 0;
    int breadth = 0;
    printf("Enter length and breadth");
    cin >> length >> breadth;
    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    cout << "Area \n"
         << a
         << "\n perimeter \n"
         << peri;
    return 0;
}