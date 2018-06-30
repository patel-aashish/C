/*
 * =====================================================================================
 *
 *       Filename:  ex42.c
 *
 *    Description:  A program to compute sum of rows and columns of a 2d matrix and
 *                  store it in the same array
 *                  1 2 3    1  2  3  6
 *                  4 5 6 -> 4  5  6  15
 *                  7 8 9    7  8  9  24
 *                           12 15 18 45
 *        Version:  1.0
 *        Created:  Saturday 30 June 2018 11:49:03  IST
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
    int i, j, r, c, sum;
    int a[MAX][MAX];

    do {
        printf( "Enter row and column size (<%d):", MAX );
        scanf( "%d %d", &r, &c );
    } while ( r < 1 || c < 1 || r > MAX || c > MAX );

    printf( "Enter %dx%d elements of matrix:\n", r, c );
    for ( i = 0; i < r ; i++ ) {
        for ( j = 0; j < c ; j++ ) {
            scanf( "%d", &a[i][j] );
        }
    }
    
    // Calculate and store sum of rows
    for ( i = 0; i < r ; i++ ) {
        sum = 0;
        for ( j = 0; j < c ; j++ ) {
            sum += a[i][j];
        }
        a[i][c] = sum;
    }
    // Calculate and store sum of columns
    for ( i = 0; i <= c ; i++ ) {
        sum = 0;
        for ( j = 0; j < r ; j++ ) {
            sum += a[j][i];
        }
        a[r][i] = sum;
    }  

    printf( "Result matrix:\n" );
    for ( i = 0; i <= r ; i++ ) {
        for ( j = 0; j <= c ; j++ ) {
            printf( "%3d ", a[i][j] );
        }
        printf( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
