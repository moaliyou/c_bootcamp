#include <stdio.h>

/* Declaring a function finds maximum number*/
int findMaximumNumber(int, int);

int main(int argc, char const *argv[])
{
    /**
     * Defining local variables
     * to test our function
     */
    int num1 = 23;
    int num2 = 3;
    int maximumNumber;

    /**
     * Calling the 'findMaximumNumber'
     * function to get the maximum value
     */
    maximumNumber = findMaximumNumber(num1, num1);

    printf("The maximum number of %d and %d is %d\n", num1, num2, maximumNumber);

    return 0;
}

/**
 * Function returning
 * the maximum number
 * between two numbers
 */
int findMaximumNumber(int num1, int num2)
{

    /**
     * Declaring local variable
     * to hold the value of
     * maximum number
     */
    int maximumNumber;

    /**
     * To get/find the maximum
     * number we've to check
     * which is greater
     * 'num1' or 'num2'
     */
    if (num1 > num2)
        maximumNumber = num1;
    else
        maximumNumber = num2;

    return maximumNumber;
}