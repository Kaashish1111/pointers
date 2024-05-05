#include<stdio.h>
int main(){
    const int a=7;
    const  *p;
    p=&a;
    // *p=5;  this gives error becouse we used const
    printf("Enter the value of a:%d\n",a);
    printf("Enter the value of a:%d\n",*p);
}