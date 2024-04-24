#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("The value of first varible is %d and the value of second variable is %d ",*a,*b);
    return;
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int y;
    printf("Enter another number: ");
    scanf("%d",&y);
    swap(&x,&y);
    return 0;
}