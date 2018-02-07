#include <stdio.h>

int main()
{
    int n1, n2;
    int x, y;

    printf("Enter two numbers:");
    scanf("%d %d", &n1, &n2);
    
    x = n1;
    y = n2;
    while (x != y) {
        if (x > y) {
            y += n2;
        } else {
            x += n1;
        }
    }
    printf("LCM of %d and %d is %d\n", n1, n2, x);

    x = n1;
    y = n2;
    while (x != y) {
        if (x > y) {
            x -= y;
        } else {
            y -= x;
        }
    }
    printf ("HCF of %d and %d is %d\n", n1, n2, x);
    
    return 0;
}


