#include<stdio.h>
int main()

{
    int choise;
    printf("Enter a Number:");
    scanf("%d", &choise);
    switch(choise)
    {
    case 1:
    case 2:
        printf("you typed 1 or 2");
        break;
     case 3:
    case 4:
        printf("you typed 3 or 4");
        break;
         default :
            printf("You typed somthing else");

    }
    return 0;
}
