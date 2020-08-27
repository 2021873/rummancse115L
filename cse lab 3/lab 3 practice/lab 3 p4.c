#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c", c);

    if(c=='A' || c=='a')
    printf("you pressed A");
    else if(c=='B'  || c=='b')
        printf("you pressed B");
    else if(c=='D' && c=='d')
        printf("you pressed FUCK");
    else
        printf("pressed any different key");
    return 0;
}
