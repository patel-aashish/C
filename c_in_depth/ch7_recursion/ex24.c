/*
 * =====================================================================================
 *
 *       Filename:  ex24.c
 *
 *    Description:  Write a recursive function to calculate log2N and logbN
 *
 *        Version:  1.0
 *        Created:  Sunday 20 May 2018 02:16:05  IST
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

double logbN(int b, double n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, b;

    do {
        printf ( "Enter base (>2): " );
        scanf ( "%d", &b );
        printf ( "Enter number (>0): " );
        scanf ( "%d", &n );
    } while ( n < 1 || b < 3);		/* -----  end do-while  ----- */

    printf ( "log %d to the base 2 = %lf\n", n, logbN(2, n) );
    printf ( "log %d to the base %d = %lf\n", n, b, logbN(b,n) );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  logbN
 *  Description:  
 * =====================================================================================
 */
double
logbN ( int b, double n ) 
{
    double t;
    if (n == 1) {
        return 0;
    } else if (n < b) {
        return (n / b);
    }
    
    return 1 + logbN(b, n/b );
}		/* -----  end of function logbN  ----- */
