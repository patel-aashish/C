/*
 * =====================================================================================
 *
 *       Filename:  ex54.c
 *
 *    Description:  A program to print twin prime less than 1000.
 *                  If two consecutive odd numbers are both primes then
 *                  they are called as twin primes.
 *
 *        Version:  1.0
 *        Created:  Wednesday 25 April 2018 09:54:57  IST
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
#include    <math.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPrime
 *  Description:  Check if the number is prime or not
 * =====================================================================================
 */
int
isPrime ( int n )
{
    int i;

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}		/* -----  end of function isPrime  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n;

    printf ( "Following are twin primes till 1000:\n" );

    for (n = 1; (n+2) < 1000; n+=2) {
        if (isPrime(n) && isPrime(n+2)) {
            printf("%d %d\n",n , n+2);
        }
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
