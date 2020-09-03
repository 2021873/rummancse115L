#include<stdio.h>

void draw_rocket_ship();
void draw_rectangle();
void draw_triangle();
void draw_intersect_line();

int main(void)
{
    draw_rocket_ship();
    printf("\n\n");
    return 0;

}
void draw_rocket_ship()
{
    draw_triangle();
    draw_rectangle();
    draw_intersect_line();

}
void draw_triangle()
{
    printf("   *   \n");
    printf("  * *  \n");
    printf(" *   * \n");
    printf("* * * *\n");

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

