#include<iostream>
#include<stdio.h>
int main()
{int n;
printf("Enter array size");
scanf("%d",&n);
int A[n];
printf("%d \n",sizeof(A));
for(int i:A){
printf("%d \n",i);
}
return 0;
}
