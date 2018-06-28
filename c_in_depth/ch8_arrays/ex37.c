/*
 * =====================================================================================
 *
 *       Filename:  ex37.c
 *
 *    Description:  A program to find if a square matrix is a symmetric or not.
 *                  A square matrix is symmetric if its transpose is the same
 *                  matrix.
 *
 *        Version:  1.0
 *        Created:  Thursday 28 June 2018 08:42:33  IST
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
    int i, j, n, flag = 0;
    int a[MAX][MAX];

    do {
        printf( "Enter row or column size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter the elements of %dx%d matrix:\n", n, n );
    for ( i = 0; i < n ; i++ ) {
        for ( j = 0; j < n; j++ ) {
            scanf( "%d", &a[i][j] );
        }
    }
    
    // Transpose of matrix is t[i][j] = a[j][i]
    // If a[i][j] == a[j][i] for all non diagonal elements
    // then the matrix is symmetric as its transpose will be
    // itself
    for ( i = 0; i < n && !flag; i++ ) {
        for ( j = 0; j < n ; j++ ) {
            if ( j != i ) {
                if ( a[i][j] != a[j][i] ) {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if ( flag ) {
        printf ( "The given matrix is not symmetric\n" );
    } else {
        printf ( "The given matrix is symmetric\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
