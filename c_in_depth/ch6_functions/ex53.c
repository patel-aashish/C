/*
 * =====================================================================================
 *
 *       Filename:  ex53.c
 *
 *    Description:  Write a function to find sum of below series
 *                  1 + 1/4 + 1/9 + 1/16 + ... upto n terms
 *
 *        Version:  1.0
 *        Created:  Wednesday 25 April 2018 09:42:07  IST
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
 *         Name:  Square
 *  Description:  Returns square of given input number
 * =====================================================================================
 */
double
Square ( int n )
{
    return n * n;
}		/* -----  end of function Square  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SumofSeries
 *  Description:  Returns sum of series till given terms
 * =====================================================================================
 */
double
SumofSeries ( int n )
{
    long double sum = 0;
    int i;

    for( i = 1; i <= n; i++) {
        sum += 1 / Square(i);
    }
    return sum;
}		/* -----  end of function SumofSeries  ----- */

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
        printf ( "Enter a number (>0):" );
        scanf ( "%d", &n );
    } while (n <= 0);

    printf ( "sum = %lf\n", SumofSeries(n));
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
