#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int length = 0, breadth = 0;
    printf("Enter length and breadth");
    cin >> length >> breadth;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    cout << "Area \n"
         << area
         << "\n perimeter \n"
         << peri;
    return 0;
}