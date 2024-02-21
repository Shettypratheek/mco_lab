// 2. Modify the above to print the thread id of the executing
//  thread, with each disply message.

#include <stdio.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    {
        printf("Welcom all!!! from thread id=%d\n",omp_get_thread_num());
    }

    printf("Im the master thread");
    return 0;
}