#include<stdio.h>
int main(){
    int a=5;
    float b=9.3;
    char c='A';
    void *ptr;
    ptr=&a;
    printf("The value of a is %d\n",*(int *)ptr);
    ptr=&b;
    printf("The value of b is %f\n",*(float *)ptr);
    ptr=&c;
    printf("The value of c is %c\n",*(char *)ptr);
    return 0;
}