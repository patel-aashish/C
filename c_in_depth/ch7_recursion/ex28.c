/*
 * =====================================================================================
 *
 *       Filename:  ex28.c
 *
 *    Description:  A program to return nth triangular number.
 *                  A triangular number is the number of dots
 *                  required to fill a equilateral triangle 
 *
 *        Version:  1.0
 *        Created:  Monday 14 May 2018 10:39:26  IST
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

int triangular (int n, int i);

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
        printf ( "Enter n:" );
        scanf ( "%d", &n );
    } while ( n < 1 );				/* -----  end do-while  ----- */

    printf ( "%dth triangular number is %d\n", n, triangular(n, 1) );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  triangular
 *  Description: A recursive function that returns nth triangular number
 * =====================================================================================
 */
int
triangular ( int n , int i )
{
    if (n == 1) {
        return n;
    }
    return  (i + triangular(n-1, ++i));
}		/* -----  end of function triangular  ----- */
