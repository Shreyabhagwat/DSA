#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b, *sum;

    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));
    sum = (int *)malloc(sizeof(int));

    *a = 10;
    *b = 20;

    *sum = *a + *b;

    printf("Addition = %d", *sum);

    free(a);
    free(b);
    free(sum);

    return 0;
}