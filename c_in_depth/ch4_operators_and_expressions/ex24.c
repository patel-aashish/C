/* Write a program to accept any two numbers      *
 * if the first number is greater than the second *
 * print the difference otherwise print sum.      *
 * Use ternary operator.                          *
 */

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b);

    printf("Result=%d\n",(a>b)?(a-b):(a+b));

    return 0;
}

