#include <stdio.h>

int main()
{
    int row, column, i, j;
    printf("Enter array row: ");
    scanf("%d", &row);
    printf("Enter array column: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter array element:\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            printf("A [%d] [%d]",i ,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nYour matrix:\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int transArr[column][row];
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            transArr[j][i] = arr[i][j];
        }
    }
    printf("\nTranspose of that matrix:\n");
    for (i=0; i<column; i++)
    {
        for (j=0; j<row; j++)
        {
            printf("%d\t", transArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
