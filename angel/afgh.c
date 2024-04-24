#include<stdio.h>
int main()
{
  int a=45;
  int*x=&a;
  *x=56;
  printf("%x\n",&a);
  printf("%x\n",x);
  printf("%d\n",*x);
  printf("%d\n",a);
}