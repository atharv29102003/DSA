#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*struct Rectangle
the code written is a call by value
{
    int length;
    int breadth;
};
void fun(struct Rectangle r)
{
    r.length = 20;
    cout << "Length" << r.length << endl
         << "Breadth" << r.breadth << endl;
}
int main()
{
    struct Rectangle r = {10, 5};
    fun(r);
    printf("length %d \n Breadth %d \n", r.length, r.breadth);

    return 0;
}*/
/*the below code written is in call by address method
struct Rectangle
{
    int length;
    int breadth;
};
void fun(struct Rectangle *p)
{
    p->length = 20;
    cout << "Length" << p->length << endl
         << "Breadth" << p->breadth << endl;
}
int main()
{
    struct Rectangle r = {10, 5};
    fun(&r);
    printf("length %d \n Breadth %d \n", r.length, r.breadth);

    return 0;
}*/
struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 55;
    p->breadth = 687;
    return p;
};
int main()
{
    struct Rectangle *ptr = fun();
    cout << "Length"
         << " " << ptr->length << endl

         << "Breadth"
         << " " << ptr->breadth << endl;
    return 0;
}