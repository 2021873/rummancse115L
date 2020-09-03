#include<stdio.h>
void computSum(int x, int y);
int main()
{
    int n1, n2;
    scanf("%d%d", &n1,&n2);
    computSum(n1, n2);
    return 0;

}
void computSum(int x, int y)
{
    int result=x+y;
    printf("%d+%d=%d", x,y, result);
}
