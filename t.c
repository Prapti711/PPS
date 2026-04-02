#include <stdio.h>
int main()
{

    int p,q,r,s;
    
    do 
    {
     printf("Enter the size of matrix A (p,q): ");
     scanf("%d,%d", &p, &q);

     printf("Enter the size of matrix B (r,s): ");
     scanf("%d,%d", &r, &s);

     if (q != r) 
     {
        printf("Error! Column of matrix A and row of matrix B  should be similar .\n");
        printf("Put again.\n\n");
     }
    } 
 while (q != r);

    int a[p][q],b[p][q],c[p][q] ;
    int i,j,k;

    printf("\nEnter elements for Matrix A:\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++)
         {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < s; j++)
         {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < s; j++)
        {
            c[i][j] = 0;

            for (k = 0; k < q; k++) 
         {
            c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
         }
        }
    }

    printf("\nMultiplicated Matrix C:\n");
    for (i = 0; i < p; i++) 
    {
    for (j = 0; j < s; j++) 
     {
        printf("%d\t", c[i][j]);
     }
    printf("\n");
    }
    

}