#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random numbier and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is poitive\n", n);
        else if (n < 0)
                printf("%d is negggative\n", n);
        else
                printf("%d is zero\n", n);

        return (0);
}
