#include<stdio.h>
void main()
{
    int a=123;
    int *p=&a;
    *p=25;
    int ** q=&p;
    int *** r=&q;
    printf("%x\n",&a);
    printf("%x\n",p);
    printf("%x\n",&p);
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",**q);
    **q=19;
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",**q);
    ***r=100;
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",***r);
}