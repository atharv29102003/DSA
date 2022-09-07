#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    /*int A[5]={5,6,88,95,1225};
    int *p;
    p=A;
    for(int i=0;i<5;i++){
        printf("%d \n",p[i]);
         /*here p can act as a name of an array
    }
    */
    /*the below code is about array inside a heap*/
    /*int *p;
    p=(int*)malloc(5*sizeof(int)); /*it is an array of 5 integers
    p[0]=10;p[1]=20;p[2]=20;p[3]=41;p[4]=8888;
    for(int i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
        }
    */
    /* same above code in c++ */
    int *p;
    p = new int[5]; /*it is an array of 5 integers */
    p[0] = 10;
    p[1] = 20;
    p[2] = 20;
    p[3] = 41;
    p[4] = 8888;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete[] p; /*used to dealocate the memory in heap*/
    free(p);
    return 0;
}
/*size of pointer is is 8 bytes for all data types int,char, float,double,struct */