#include <stdio.h>

int main (void)
{
    int n, triNum;

    triNum = 0;

    for (n = 1; n <= 200; n += 1)
        triNum += n;

    printf ("The 200th triangular number is %i\n", triNum);

    return 0;
}