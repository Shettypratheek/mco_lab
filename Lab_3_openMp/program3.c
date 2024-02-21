// 3. Further modify the above to print the total number of 
// executing threads.

#include <stdio.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    {
        printf("Welcome all!!! is executed by %d threads\n",omp_get_num_threads());
    }
}