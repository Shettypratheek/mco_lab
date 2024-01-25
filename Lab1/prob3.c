// 3. Write a simple C program to generate a random number 
// between 0 and 9.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    time(&t);
    srand(t);
    for(int i=0;i<10;i++)
    printf("%d\n",rand()%i);
    return 0;
}