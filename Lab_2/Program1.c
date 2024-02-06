// 1. (i) Write a C program to search for a given element in a
// matrix. The program should take a matrix and a target
// element as input, and it should output whether the element
// is present in the matrix or not.

// (ii) Modify your code so that you convert the code into a
// function called search().
// Signature of search() can be as below:
//  int search(int mat[][], int rows, int cols, int
// key).

#include <stdio.h>
#include <assert.h>

int search(int *arr, int row, int col, int key);

int main()
{

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i + j;
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }

    assert(search((int *)arr, 3, 3, 4) == 0);
    assert(search((int *)arr, 3, 3, 9) == -1);
    assert(search((int *)arr, 3, 3, 2) == 0);

    return 0;
}
int search(int *arr, int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*(arr + (i * row) + j) == key)
                return 0;
        }
    }
    return -1;
}
