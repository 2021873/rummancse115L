#include<stdio.h>
#include<math.h>
void findArea(int radius);
void findVolume(int radius);
int main()
{
    int n;
    printf("Enter the radius:");
    scanf("%d", &n);
    findArea(n);
    findVolume(n);

    return 0;
}
void findArea(int radius)
{
    float result;
    result=4*3.1416*radius*radius;
    printf("Area %lf\n", result);
}
void findVolume(int radius)
{
    float result;
    result=3.1416*pow(radius,3)*1.33;
    printf("Volume %lf\n", result);
}
