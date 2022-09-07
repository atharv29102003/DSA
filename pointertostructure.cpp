#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    /*Rectangle r={10,5}; /*there is no need to write struct in c++
    cout<<r.length<<endl;/*for normal variable Rectangle we use dot operator
cout<<r.breadth<<endl;
Rectangle *p=&r;
p=(struct Rectangle*)malloc(sizeof(struct Rectangle)); this is declaration in c */
    struct Rectangle *p;
    p = new Rectangle; /* declaration of pointer in c++ */

    p->length = 15;
    p->breadth = 25;
    cout << p->length << endl; /*for pointer we use -> */
    cout << p->breadth << endl;
    return 0;
}