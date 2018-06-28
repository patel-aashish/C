/*
 * =====================================================================================
 *
 *       Filename:  ex39.c
 *
 *    Description:  A program to find sum of all the elements of an array using
 *                  recursion and repeatedly splitting the array in two parts
 *
 *        Version:  1.0
 *        Created:  Thursday 28 June 2018 09:13:51  IST
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

unsigned int sum ( int *a, int l, int u);

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
    
    printf ( "Sum of the elements is %u\n", sum(a, 0, n-1) );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sum
 *  Description:  recursive function that finds sum of elements by splitting in two
 * =====================================================================================
 */
unsigned int
sum ( int *a, int l, int u )
{
    int m;

    if ( l == u) {
        return a[l];
    }
    
    m = (l+u)/2;
    return sum(a, l, m) + sum(a, m+1, u);
}		/* -----  end of function sum  ----- */
