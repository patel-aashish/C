/*
 * =====================================================================================
 *
 *       Filename:  ex26.c
 *
 *    Description:   Write a program to find sum of series both by recursive and by 
 *                   iterative method
 *                   x - x^3/ 3! + x^5/5! - ....x^(2n -1)/ (2n-1)!
 *
 *        Version:  1.0
 *        Created:  Thursday 17 May 2018 11:47:05  IST
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

double fact (int n);
double xpown (int x, int n);
double sumSeries(int x, int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int x, n;

    do {
        printf ( "Enter x and n (>0):" );
        scanf ( "%d %d", &x, &n );
    } while ( n < 1 || x < 1);		/* -----  end do-while  ----- */

    printf ( "Sum of series for x = %d & n= %d is %lf", x, n, sumSeries(x,n) );
    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fact
 *  Description: recursive function to find factorial of n 
 * =====================================================================================
 */
double
fact ( int n )
{
    if ( n == 0 || n == 1 ) {
        return 1;
    }
    return n * fact(n-1);
}		/* -----  end of function fact  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  xpown
 *  Description:  recursive function to find x^n
 * =====================================================================================
 */
double
xpown ( int x, int n )
{
    if( x == 1 || n == 1) {
        return x;
    }

    return x * xpown(x, n-1);
}		/* -----  end of function xpown  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumSeries
 *  Description:  recursive function to find sum of series
 * =====================================================================================
 */
double
sumSeries ( int x, int n )
{
    int t;
    if ( n == 1 ) {
        return x;
    }

    t = (2 * n) - 1;
    if ( n % 2 == 0) {
        return sumSeries(x, n-1) - (xpown(x, t) / fact(t)); 
    } else {
        return sumSeries(x, n-1) + (xpown(x, t) / fact(t)); 
    }
}		/* -----  end of function sumSeries  ----- */
