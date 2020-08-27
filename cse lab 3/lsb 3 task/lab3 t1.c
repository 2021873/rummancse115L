#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if(num>0)
        printf("%d is a positive Number", num);
    else
        printf("%d is a negative Number", num);
    return 0;
}
