#include<stdio.h>
int main(){
    char str[]="welcome to jerry's lecture";
    char *ptr=str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("%c\n",*(++ptr +10)-32);
    printf("%c %c %c",*ptr,*++ptr,*--ptr);
    return 0;
}