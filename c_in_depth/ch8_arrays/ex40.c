/*
 * =====================================================================================
 *
 *       Filename:  ex40.c
 *
 *    Description:  A program to reverse a array using recursion
 *
 *        Version:  1.0
 *        Created:  Thursday 28 June 2018 09:24:47  IST
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

void reverse (int *a, int i, int j);

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
    
    reverse(a, 0, n-1);
    printf( "Result matrix:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf( "%d ", a[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  reverse
 *  Description:  recursive function to reverse a array
 * =====================================================================================
 */
void
reverse ( int *a, int i, int j )
{
    int t;

    if ( i >= j ) {
        return;
    }

    if ( a[i] != a[j] ) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    
    reverse(a, ++i, --j);
}		/* -----  end of function reverse  ----- */
