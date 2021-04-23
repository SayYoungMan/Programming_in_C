#include <stdio.h>

int main (void)
{
    int num, right;

    printf ("Enter your number.\n");
    scanf ("%i", &num);

    while (num != 0) {
        right = num % 10;
        printf ("%i", right);
        num /= 10;
    }

    printf ("\n");

    return 0;
}