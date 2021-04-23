#include <stdio.h>

int main (void)
{
    int num, right;

    printf ("Enter your number.\n");
    scanf ("%i", &num);

    do {
        right = num % 10;
        printf ("%i", right);
        num /= 10;
    }
    while (num != 0);

    printf ("\n");

    return 0;
}