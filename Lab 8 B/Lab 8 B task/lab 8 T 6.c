#include<stdio.h>
#include<math.h>
int seriesSum1(int a);
int main()
{
    int x,z;
    printf("Enter a:");
    scanf("%d", &x);
    z=seriesSum1(x);
    printf("total sum is %d", z);
    return 0;
}
int seriesSum1(int a)
{
    int i,sum=0,trem=0;
    for(i=0;i<a;i++)
    {
        trem=pow((a-i),2);
        if(i%2 == 1)
            sum=sum-trem;
        else
            sum=sum+trem;
    }
    return sum;
}
