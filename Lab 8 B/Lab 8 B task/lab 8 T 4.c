#include<stdio.h>
void printStarPyramid(int line);
int main()
{
    int x;
    scanf("%d", &x);
    printStarPyramid(x);
    return 0;

}
void printStarPyramid(int line)
{
    int i,j;
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=line-i;j++)
        {
            printf(" ");

        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

