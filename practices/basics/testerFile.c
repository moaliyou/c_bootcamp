#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char characters;
char numbers;

numbers = 48;
while (numbers < 58)
{
    putchar(numbers);
    numbers++;
}
characters = 97;
while (characters < 103)
{
    putchar(characters);
    characters++;
}    
putchar('\n');
return (0);
}