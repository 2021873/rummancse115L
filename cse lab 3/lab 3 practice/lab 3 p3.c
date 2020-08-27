#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if(num>=90)
        printf("A grade");
    else if(num>=80 && num<90)
        printf("A- grade");
    else if(num>=70 && num<80)
        printf("B+ grade");
    else
        printf("fail");
    return 0;

}
