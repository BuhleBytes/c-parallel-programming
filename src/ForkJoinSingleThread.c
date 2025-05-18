#include <omp.h> //Include OMP library
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\n 'Lets get to work' says thread %d\n", omp_get_thread_num());

// Fork
#pragma omp parallel
    {
        printf("Hello #1 from thread = %d\n", omp_get_thread_num());
#pragma omp single
        {
            printf("\n'Lets pause' says thread %d\n\n", omp_get_thread_num());
            printf("\n'I want a rest' says thread %d\n\n", omp_get_thread_num());
        }
        printf("Hello #2 from thread = %d\n", omp_get_thread_num());
    } // Join
    printf("\nAll done %d\n", omp_get_thread_num());
    return 0;
}