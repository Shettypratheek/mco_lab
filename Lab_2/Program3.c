//  3. (i) Write a C program to interchange any two rows of a
// matrix. The user should input the matrix, and the  row
// numbers to be interchanged, and the program should display
// the modified matrix.
//  (ii) Make suitable modifications to your code so that you
// have function for the same.Write a suitable main() which
// invokes your function and observe your results.

#include <stdio.h>
#include <stdlib.h>

void inter_mat(int *mat, int row, int col, int row_1, int row_2);
int main()
{
    int i, j;
    int mat[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = rand() % 10 + 1;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------------------------------\n");
    inter_mat((int *)mat, 3, 4, 1, 2);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void inter_mat(int *mat, int row, int col, int row_1, int row_2)
{

    for (int j = 0; j < col; j++)
    {
        // printf("%d\t",*(mat+(row_2*col)+j));
        int temp = *(mat + (row_1 * col) + j);
        *(mat + (row_1 * col) + j) = *(mat + (row_2 * col) + j);
        *(mat + (row_2 * col) + j) = temp;
    }
}
