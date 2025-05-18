#include <omp.h> //include OMP library
#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("\n Lets get to work says thread%d\n", omp_get_thread_num());

// Fork
#pragma omp parallel
    {
        printf("Hello from thread = %d\n", omp_get_thread_num());
    } // JOIN

    printf("\n 'Taking a break' says thread %d\n\n", omp_get_thread_num());

// Fork
#pragma ompparallel
    {
        printf("Hello from thread = %d\n", omp_get_thread_num());
    } // Join

    printf("\n All done %d\n", omp_get_thread_num());
}