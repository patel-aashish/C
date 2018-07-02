/*
 * =====================================================================================
 *
 *       Filename:  ex45.c
 *
 *    Description:  A program to partition the array in such a way that negative elements
 *                  are on the left side of the array and the positive elements are on
 *                  right side.
 *
 *        Version:  1.0
 *        Created:  Monday 02 July 2018 09:12:07  IST
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, j, n, t;
    int a[MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }
    
    for ( i = 1; i < n; i++ ) {
        t = a[i];
        for ( j = i-1; j >= 0 && a[j] > t; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }

    printf( "Result matrix:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf( "%d ", a[i] );
    }
    printf ( "\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
