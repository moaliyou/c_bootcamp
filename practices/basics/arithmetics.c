#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int num_1;
    int num_2;

    puts("Enter first number: ");
    scanf("%d", &num_1);

    puts("Enter second number: ");
    scanf("%d", &num_2);

    int sum = num_1 + num_2;

    printf("The sum is %d\n", sum);

    return 0;
}
