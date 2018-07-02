/*
 * =====================================================================================
 *
 *       Filename:  ex46.c
 *
 *    Description:  A program to find next_ge for an unsorted array with n elements.
 *                  Such that
 *                  next_ge[i] = next element greater than arr[i] or -1 if none is found.
 *
 *        Version:  1.0
 *        Created:  Monday 02 July 2018 09:20:05  IST
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
    int i, j, n;
    int a[MAX], next_ge[MAX];

    do {
        printf( "Enter row and column size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }
    
    for ( i = 0; i < n; i++ ) {
        for ( j = i+1; j < n; j++ ) {
            if ( a[j] > a[i] ) {
                next_ge[i] = a[j];
                break;
            }
        }
        if ( j == n ) {
            next_ge[i] = -1;
        }
    }

    printf( "Result matrix:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf( "%d ", next_ge[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
