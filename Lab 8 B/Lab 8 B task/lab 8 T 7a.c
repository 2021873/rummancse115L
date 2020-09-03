
#include<stdio.h>

void draw_male_stick_figure();
void draw_rectangle();
void deaw_circle();
void draw_intersect_line();

int main(void)
{
    draw_male_stick_figure();
    printf("\n\n");
    return 0;

}
void draw_male_stick_figure()
{
    draw_circle();
    draw_rectangle();
    draw_intersect_line();

}

void draw_rectangle()
{
    printf("* * * *\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("* * * *\n");

}
void draw_intersect_line()
{
    printf("   *   \n");
    printf("  * *  \n");
    printf(" *   * \n");
    printf("*     *\n");
}
void draw_circle()
{
       printf("  **  \n");
       printf("*    *\n");
       printf("*    *\n");
       printf("  **  \n");
}


