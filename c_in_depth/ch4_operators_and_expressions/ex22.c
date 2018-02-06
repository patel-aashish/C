/* Write a program to accept a number in decimal *
 * and print the number in octal and hexadecimal *
 */

#include <stdio.h>

int main ()
{
    int num;

    printf("Enter the number to be converted:");
    scanf("%d", &num);

    printf("Decimal= %d, Octal= %o, Hex= %x\n",num, num, num);

    return 0;
}
