/* Write a program that accepts radius of a circle
 * and outputs area and perimeter of the circle
 */

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int radius;
    float  area, perimeter;

    printf("Enter the radius of the circle:");
    scanf("%u",&radius);
    area = M_PI * radius * radius;
    perimeter = 2 * M_PI * radius;
    printf("The circle with r = %u has area = %.2f and perimeter = %.2f\n",
           radius, area, perimeter);

    return 0;
}
