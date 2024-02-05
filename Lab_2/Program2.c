//  2. (i) Write a C program to sort the elements of a matrix.
// The program should take a matrix as input and display the
// sorted matrix.
//  (ii) Modify your code so that you convert the code into a
// function called sort(). Signature of matrix_sort() can be
// as below:
//  int sort(int mat[][], int rows, int cols).
// Let the return value of sort() be zero always.
//  Write a suitable main() which invokes sort() and observe
// your results.

#include <stdio.h>
#include <stdlib.h>
void matrix_sort(int *arr, int row, int col);
int main()
{
    int arr[3][4];

    printf("Before Sort\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = i + j + (i * j) + rand() % 10;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("After Sort\n");
    matrix_sort((int *)arr, 3, 4);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void matrix_sort(int *arr, int row, int col)
{
    int array[row * col];
    int index = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            array[index] = *(arr + (i * col) + j);
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    index = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(arr + (i * col) + j) = array[index];

            index++;
        }
    }
}
