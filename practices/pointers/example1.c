#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
    int n;
    int *p;

    n = 98;
    p = &n;
    printf("Value of 'n': %d\n", n);
    printf("Address of 'n' : %p\n", &n);
    printf("Value of 'p' : %p\n", p);
    *p = 402;
    printf("Value of 'n': %d\n", n);
    return (0);
}
