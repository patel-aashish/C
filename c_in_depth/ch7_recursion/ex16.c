/*
 * =====================================================================================
 *
 *       Filename:  ex16.c
 *
 *    Description:  Write a recursive function to display and sum
 *                  all the proper divisors of a given number n
 *
 *        Version:  1.0
 *        Created:  Sunday 29 April 2018 10:58:05  IST
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

int sumPDivisors (int t, int n);

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
    
    do {
        printf ( "Enter a number n(>0):" );
        scanf ( "%d", &n );
    } while (n < 1);				/* -----  end do-while  ----- */
    
    printf ( "Sum of proper divisors of %d:\n", n );
    printf ( "\b\b= %d\n", sumPDivisors(1, n));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumPDivisors
 *  Description:  Recursive function that adds and displays proper divisors of n 
 * =====================================================================================
 */
int
sumPDivisors ( int t, int n )
{
    if (t > (n/2)) {
        return 0;
    }
    if (n % t == 0) {
        printf ( "%d + ", t);
        return (t + sumPDivisors(t + 1, n));
    } else {
        return sumPDivisors(t + 1, n);
    }
}		/* -----  end of function sumPDivisors  ----- */
