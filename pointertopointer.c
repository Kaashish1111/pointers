#include<stdio.h>
int main(){
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    // *q=25; is not correct.
    // **q=25;
    printf("%d\t",a);
    printf("%d\t",*p);
    printf("%d\t",**q);
    return 0;
}