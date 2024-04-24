#include<stdio.h>
int main(){
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=p;
    // *q=*p;
    printf("%d\t%d\t%d",a,*p,*q);
    return 0;
}