
#include<stdio.h>
void printvalue(int n);
int main()
{
    printvalue(100);
    printvalue(25);
    return 0;
}
void printvalue(int n)
{
    printf("The number is %d\n", n);
}
