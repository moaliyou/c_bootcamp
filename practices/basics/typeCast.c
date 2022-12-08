#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float decimal_num;
    int whole_num = 10;

    // casting types 
    // (float to integer)
    // (integer to float)

    // integer number to 
    // float/decimal number
    decimal_num = (float) whole_num;

    // displaying/printing
    // the value of 'decimal_num'
    printf("\"The value of 'decimal_num' is %.2f\n", decimal_num);

    // assigning new value
    decimal_num = 9.32;

    // float/decimal number
    // to integer/whole number
    whole_num = (int) decimal_num;

    // displaying/printing
    // the value of 'whole_num'
    printf("\"The value of 'decimal_num' is %d\n", whole_num);

    return 0;
}