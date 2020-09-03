#include<stdio.h>
int computeAverage(int a, int b);
int main()
{
    int x,y,z;
    printf("Enter a:");
     scanf("%d", &x);
    printf("Enter b;");
    scanf("%d", &y);
    z=computeAverage(x,y);
    printf("Average is %d", z);

}
int computeAverage(int a, int b)
{
    int result;
    result=(a+b)/2;
    return result;
}
