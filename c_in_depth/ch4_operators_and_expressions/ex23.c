/* Write a program to accept any number and print *
 * the value of remainder after division by 3     *
 */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number to be divided:");
    scanf("%d", &num);

    printf("num%%3 = %d\n", num%3);

    return 0;
}

