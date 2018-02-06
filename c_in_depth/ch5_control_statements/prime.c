#include <stdio.h>
#include <math.h>

int main ()
{
    int num, i, srt;
    
    printf("Enter a number to check:");
    scanf("%d", &num);
    
    srt = sqrt(num);
    for(i = 2; i <= srt; i++) {
        if (num % i == 0) {
            printf("The number(%d) is not prime\n", num);
            break;
        }
    }
    if(i == srt+1) {
        printf("The number(%d) is prime\n", num);
    }

    return 0;
}
