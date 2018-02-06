/* Write a program that accepts marks in 5 subjects *
 * and calculates total percentage marks            *
 */

#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float percent;

    printf("Enter marks of 5 subjects(out of 100 each):");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    percent = (float)(s1+s2+s3+s4+s5)/500;

    printf("Percentage= %.2f%%\n",percent*100);

    return 0;
}
