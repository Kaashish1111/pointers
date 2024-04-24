#include <stdio.h>
int main()
{
    int x=5;
    char ch=7;
    int *ptr=&x;
    char *ptr_ch=&ch;
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(ptr_ch));
     return 0;
}