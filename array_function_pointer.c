#include<stdio.h>
void add(int a,int b){
    printf("sum is %d",a+b);
}
void sub(int a,int b){
    printf("subtraction is %d",a-b);
}
void mul(int a,int b){
    printf("multiplaction is %d",a*b);
}
void div(int a,int b){
    printf("divison is %d",a/b);
}
int main(){
    int value;
    printf("Enter a value (0,1,2,3):");
    scanf("%d",&value);
    void (*ftr[10])(int,int)={add,sub,mul,div};
    int a,b;
    printf("Enter two number on which you wnat to perfom the operation: ");
    scanf("%d%d",&a,&b);
    (*ftr[value])(a,b);
    return 0;
}