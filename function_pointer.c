#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main(){
    int s=0;
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(10, 20);
    printf("sum is %d\n", s);
    return 0;
}