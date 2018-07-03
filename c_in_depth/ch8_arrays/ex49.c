/*
 * =====================================================================================
 *
 *       Filename:  ex49.c
 *
 *    Description:  A program to shift array left by 1 place and add first element 
 *                  at last.
 *
 *        Version:  1.0
 *        Created:  Tuesday 03 July 2018 08:22:06  IST
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
    int i, n, t;
    int a[MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }
    
    t = a[0];
    for (i = 0; i < n-1; i++ ) {
        a[i] = a[i+1];
    }
    a[i] = t;

    printf( "Result array:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf( "%d ", a[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
