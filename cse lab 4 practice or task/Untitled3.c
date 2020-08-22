#include<stdio.h>
int main()

{
    int choise;
    printf("Enter a Number:");
    scanf("%d", &choise);
    switch(choise)
    {
    case 1:
        printf("you typed 1");
        break;
         case 2:
        printf("you typed 2");
        break;
         case 3:
        printf("you typed 3");
        break;
         default :
            printf("You typed somthing else");


    }
    return 0;

}
