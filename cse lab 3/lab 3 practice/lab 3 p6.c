#include<stdio.h>
int mian()
{
    int i;
    int j=3;
    printf("Enter a value of I:");
    scanf("%d", &i);
    if(i>0)
    {
        if(i<j)
        {
            printf("I is getter then ZERO and less then j");

        }
        else
        {
            printf("I is getter then j");

        }


    }
    else
    {
        printf("I is less then 0");
    }

    return 0;
}
