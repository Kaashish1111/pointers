#include<stdio.h>
int main(){
    int a[]={4,5,6,7,8};
    int *p=&a[0],*q=&a[2];
    printf("%x\t,%x",p,q);
    printf("\n");
    int d=q-p;
    printf("%d",d);
    return 0;
}