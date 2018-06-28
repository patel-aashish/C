/*
 * =====================================================================================
 *
 *       Filename:  ex38.c
 *
 *    Description:  A program to find sum of even numbers of array using recursion
 *
 *        Version:  1.0
 *        Created:  Thursday 28 June 2018 09:02:21  IST
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

#define     MAX       50 /* Max row and column size */

unsigned int sum (int *a, int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i,n;
    int a[MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }
    
    printf ( "Sum of even numbers is %u \n", sum(a, n-1) );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sum
 *  Description:  Recursive function to find sum of even numbers in given array
 * =====================================================================================
 */
unsigned int
sum ( int *a, int n )
{
    if ( n < 0) {
        return 0;
    }

    if ( a[n] % 2 == 0 ) {
        return a[n] + sum (a, --n);
    } else {
        return sum (a, --n);
    }
}		/* -----  end of function sum  ----- */
