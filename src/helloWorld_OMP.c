#include <omp.h> //include OMP library
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, from master thread");
#pragma omp parallel
    {
#if defined(_OPENMP)
        printf("Hello World from thread=%d\n", omp_get_thread_num());
#endif
    }
}