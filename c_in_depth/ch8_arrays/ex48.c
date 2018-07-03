/*
 * =====================================================================================
 *
 *       Filename:  ex48.c
 *
 *    Description:  A program to reverse a portion of an array
 *
 *        Version:  1.0
 *        Created:  Tuesday 03 July 2018 08:13:08  IST
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

#define     MAX       50 /* Max size */

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
    
    do {
        printf ( "Enter start and end of the portion ( 0 <= start < end <= %d):", n-1 );
        scanf( "%d %d", &i, &j );
    } while ( i < 0 || i >= j || j > MAX );

    while ( i < j ) {
        if ( a[i] != a[j] ) { 
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
        i++;
        j--;
    }

    printf( "Result array:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf( "%d ", a[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
