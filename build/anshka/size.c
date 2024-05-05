#include<stdio.h>
int main(){
    int a=5;
    float b=6.5;
    char ch='A';
    int *x=&a;
    float  *y=&b;
    char *z=&ch;
    // printf("The value of a is %d\n",sizeof(a));
    // printf("The value of b is %d\n",sizeof(b));
    // printf("The value of ch is %d\n",sizeof(ch));
    printf("The value of ch is %d\n",sizeof(x));
    printf("The value of ch is %d\n",sizeof(y));
    printf("The value of ch is %d\n",sizeof(z));
}