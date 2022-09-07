#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*int add(int a,int b) /* the method used is call by value mechanism
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int num1=10,num2=20,sum;
    sum=add(num1,num2);
    cout<<"sum is"<<sum<<endl;
    return 0;
}*/
/*void swap(int *a,int *b){ /*method used is call by address and we use pointers in call by
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1=10,num2=15;
    swap(&num1,&num2);
    cout<<"first number"<<num1<<endl;
    cout<<"second number"<<num2<<endl;
}*/
void swap(int &a, int &b)
{ /*method used is call by reference and we use addresses in call by reference*/
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10, num2 = 15;
    swap(num1, num2);
    cout << "first number" << num1 << endl;
    cout << "second number" << num2 << endl;
}