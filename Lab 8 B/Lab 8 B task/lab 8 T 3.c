
#include<stdio.h>
double getArea(int a, int b, int h);
int main()
{
    double n1,n2,n3,z;
    printf("Enter a:");
    scanf("%d", &n1);
    printf("Enter b:");
    scanf("%d", &n2);
    printf("Enter h:");
    scanf("%d", &n3);
    z= getArea(n1,n2,n3);
    printf("Area of trapezoid is %f", z);
    return 0;
}
double getArea(int a, int b, int h)
{
    int result;
    result= 1/2 * (a + b) * h;
    return result;
}
