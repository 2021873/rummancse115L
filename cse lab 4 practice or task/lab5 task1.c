#include <stdio.h>
int main()
 {
    char operator;
    double x, y;
    printf("Enter an operator: ");
    scanf("%c", &operator);
    printf("Enter 1st operands: ");
    scanf("%lf", &x);
    printf("Enter 2st operands: ");
    scanf("%lf", &y);

    switch (operator)
     {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", x, y, x+y);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",x, y, x-y );
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf",x, y, x*y );
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", x, y, x/y);
        break;
    default:
        printf("operator is not correct");
    }

    return 0;
}
