#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
     for(int i=0;i<5;i++){
        p=&arr[i];
        printf("%d\t",*p);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        p+=i;
        printf("%x\t",p);
    }
    return 0;
}