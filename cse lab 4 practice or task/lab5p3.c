#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a character:");
    scanf("%c", &choice);
    switch(choice)
    {
    case 'a':
        printf("you typed a");
        break;
     case 'b':
        printf("you typed b");
        break;
     default :
            printf("You typed somthing else");

    }
    return 0;
}
