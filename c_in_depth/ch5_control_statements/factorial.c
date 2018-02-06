#include <stdio.h>

int main ()
{
    int num, i;
    unsigned long int fact=1;

    
    printf("Please enter a number:");
    scanf("%d",&num);

    for(i=num;i>1;i--) {
        fact*=i;
    }

    printf("Factorial of n(%d) is %lu\n",num, fact);

    return 0;
}
