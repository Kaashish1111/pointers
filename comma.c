#include<stdio.h>
int main(){
    int a=10;
    int b=a;
    int *p,*q;
    p=&a,&b;
    q=(&a,&b);
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%p\n",&b);
    printf("%p\n",q);
    return 0;
}