/*
 * =====================================================================================
 *
 *       Filename:  ex45.c
 *
 *    Description:  Find all perfect numbers in a given range
 *
 *        Version:  1.0
 *        Created:  Tuesday 24 April 2018 09:35:01  IST
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
 *         Name:  sumPDivisors
 *  Description:  
 * =====================================================================================
 */
int
sumPDivisors ( int n )
{
    int sum = 0, i;
    for ( i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}		/* -----  end of function sumPDivisor  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPerfect
 *  Description:  Check if the number is perfect i.e sum of proper divisors is equal to
 *                the number itself
 * =====================================================================================
 */
int
isPerfect ( int n )
{
    if (n == sumPDivisors(n)) {
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}		/* -----  end of function isPerfect  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int min, max;
    int n;
    do {
        printf ( "Enter the range(max >= min):\n" );
        scanf ( "%d %d", &min, &max);
    } while (min < 0 && max <= min);
    
    printf ( "Perfect numbers in range[%d-%d]\n", min, max );
    for (n = min; n <= max; n++) {
        if (isPerfect(n) == EXIT_SUCCESS) {
            printf ( "%d ", n );
        }
    }
    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
