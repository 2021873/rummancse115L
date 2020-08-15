#include<stdio.h>
int main()

{
    int A[100][100], i, j, rows, columns;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &columns);

    for(i=0; i<rows ; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);

        }
    }
    printf("the value of A:\n" );
     for(i=0;i<rows;i++)
     {
         for(j=0;j<columns;j++)
         {
              printf("%10d ",A[i][j]);
         }

     }

}
