#include<stdio.h>
int main(){
    int a=25;
    printf("%p",&a);
    int *x=&a;
    printf("\n%p",x);
    printf("\n%p",&x);
    printf("\n%d",*x);

    int b=25;
    int *y;
    y=&b;                 // but this is worng *y=&b;
    printf("\n%p",&b);
    printf("\n%p",y);

    int c=30;
    int *z=&c;
    *z=26;
    printf("\n%d",c);
    printf("\n%d",*z);
    return 0;
}