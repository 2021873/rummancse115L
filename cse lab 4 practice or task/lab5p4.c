#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d,%d", &a, &b);

    switch(a)
    {
    case 1:
        printf("This part of outer switch\n", a);
        switch(b)
        {
      case 2:
        printf("This part of outer switch\n", b);
        break;
        default:
        printf("Inner switch default value\n");
        }
        break;
        default:
        printf("default value");
    }
    return 0;
}
