#include <stdio.h>

int main (void)
{
    int n, num, triNum, count;

    for (count = 1; count <= 5; count++) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &num);

        triNum = 0;

        for (n = 1; n <= num; n++)
            triNum += n;

        printf ("The triangular number %i is %i\n", num, triNum);
    }

    return 0;
}