// 4. Write a simple C program to generate a random number 
// between 1 and 100.

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
    for(int i=1;i<100;i++)
    printf("%d\n",rand()%i);
    return 0;
}