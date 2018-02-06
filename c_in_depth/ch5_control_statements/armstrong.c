#include <stdio.h>

int main ()
{
    int s=0, t, i;
    int d;
    
    for (i=100; i <= 999; ++i) {
        s = 0;
        t = i;
        while(t) {
            d = t%10;
            s += d*d*d;
            t/=10;
        }
        if(s == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
