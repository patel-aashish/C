/* Write a program that enters the temperature in Celsius 
 * and converts that into Fahrenheit 
 */

#include <stdio.h>

int main ()
{
   float temp, result;
     
   printf("Enter the temperature: ");
   scanf("%f", &temp);
   result = (temp * 1.8) + 32;  // T(F) = T(C) * (9/5) + 32
   printf("Temperature in fahrenheit is %.2f\n", result);

   return 0;
}
