/*
 * =====================================================================================
 *
 *       Filename:  ex46.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 25 April 2018 08:58:19  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aashish Patel (), aashish.a.patel@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include    <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: sumPDivisors
 *  Description: Calculates sum of proper divisors of given number n 
 * =====================================================================================
 */
int
sumPDivisors(int n)
{   
    int sum = 0, i;
    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}		/* -----  end of function int sumPDivisors(int n)  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int min, max, n1, n2;

    do {
        printf ( "Enter range of number[min <= max]:" );
        scanf ( "%d-%d", &min, &max );
    } while (min < 0 && max < min);
    printf ( "Amicable pairs in range [%d-%d]:\n", min, max );
    for (n1 = min; n1 <= max; n1++) {
        n2 = sumPDivisors(n1);
        if((n2 < max) && (n2 > n1) && (sumPDivisors(n2) == n1)) {
            printf ( "%d %d\n", n1, n2 );
        }
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
