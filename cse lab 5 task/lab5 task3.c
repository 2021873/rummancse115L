#include<stdio.h>
int main()
{
    int i, x, term=0, sum=0;
    scanf("%d", &x);
    for(i=1;i<=x;i++)
    {
        term=i;
        sum=sum+term;

    }
    printf("The total sum is %d\n", sum);
    return 0;
}
