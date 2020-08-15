#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter the length of Array :");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+a[i];

    }
    printf("the sum is %d\n", sum);
    return 0;


}

