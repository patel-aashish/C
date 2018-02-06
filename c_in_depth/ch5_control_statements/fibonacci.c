#include <stdio.h>

int main ()
{
    int num, a=0, b=1;
    long int sum=1;

    printf("Enter a max limit:");
    scanf("%d", &num);

    do {
        printf("%ld ", sum);
        sum = a+b;
        a = b;
        b = sum;
    } while (sum <= num);
    printf("\n");

    return 0;
}
