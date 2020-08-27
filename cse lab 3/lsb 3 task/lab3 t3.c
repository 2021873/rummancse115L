#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", num);
    if(num%2 == 0)
        printf("its an even number");
    else
        printf("its an odd number");
    return 0;
}
