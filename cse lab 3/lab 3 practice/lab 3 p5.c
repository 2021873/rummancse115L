#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Number:");
    scanf("%d", &i);

    if(i<5)
    {
        if(i>0)
            printf("%d is getter then 0 and less then 5", i);

    }
    else
        printf("%d is getter then 5", i);
    return 0;
}
