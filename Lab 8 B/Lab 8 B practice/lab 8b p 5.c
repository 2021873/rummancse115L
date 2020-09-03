#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a,b,c;
    scanf("%d%d", &a,&b);
    c=sum(a, b);
    printf("%d+%d=%d", a,b,c);
    return 0;

}
int sum(int x, int y)
{
    int result;
    result=x+y;
    return result;
}
