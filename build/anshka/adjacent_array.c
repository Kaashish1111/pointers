#include<stdio.h>
int main(){
    int a[]={12,13,48,19,20};
    int *p=a;
    for(int i=0;i<5;i++){
        printf("%x\n",(p+i));
    }
}