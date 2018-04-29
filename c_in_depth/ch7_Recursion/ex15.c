/*
 * =====================================================================================
 *
 *       Filename:  ex15.c
 *
 *    Description:  Write a recursive function to count all the prime numbers between
 *                  numbers a and b both inclusive.
 *
 *        Version:  1.0
 *        Created:  Saturday 28 April 2018 10:48:21  IST
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

int prime( int a, int b);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a, b;

    do {
        printf ( "Enter a and b (b > a > 1):\n" );
        scanf ( "%d %d", &a, &b );
    } while (a < 2 && b < a); /* -----  end do-while  ----- */

    printf ( "Total prime numbers in range [%d-%d]: %d\n", a, b, prime(a,b));

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  prime
 *  Description:  
 * =====================================================================================
 */
int
prime (int a, int b )
{
    int i;

    if ( a > b) {
        return 0;
    }
    for (i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            break;
        }
    }
    if (i > sqrt(a)) {
        return ( 1 + prime(a+1, b));
    } else {
        return prime(a+1, b);
    }
}		/* -----  end of function prime  ----- */
