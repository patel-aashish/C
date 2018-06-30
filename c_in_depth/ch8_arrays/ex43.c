/*
 * =====================================================================================
 *
 *       Filename:  ex43.c
 *
 *    Description:  A program to print rectangular matrix spirally.
 *
 *        Version:  1.0
 *        Created:  Saturday 30 June 2018 12:10:53  IST
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
    int u, d, l, r, dir, i, j;
    int a[MAX][MAX];

    do {
        printf( "Enter row and column size (<%d):", MAX );
        scanf( "%d %d", &d, &r );
    } while ( d < 1 || r < 1 || d > MAX || r > MAX );

    printf( "Enter %dx%d elements of matrix:\n", d, r );
    for ( i = 0; i < d ; i++ ) {
        for ( j = 0; j < r ; j++ ) {
            scanf( "%d", &a[i][j] );
        }
    }

    printf ( "Result :\n" );
    u = 0; d = d-1; l = 0; r = r-1;
    dir = 0;
    while ( u <= d && l <= r ) {
        if (dir == 0) { // Right
            i = l;
            while ( i <= r ) {
                printf ( "%d ", a[u][i] );
                i++;
            }
            dir = 1;
            u++;
        } else if ( dir == 1 ) { // Down
            i = u;
            while ( i <= d ) {
                printf ( "%d ", a[i][r] );
                i++;
            }
            dir = 2;
            r--;
        } else if ( dir == 2 ) { // left
            i = r;
            while ( i >= l ) {
                printf ( "%d ", a[d][i] );
                i--;
            }
            dir = 3;
            d--;
        } else { // Up
            i = d;
            while ( i >= u ) {
                printf ( "%d ", a[i][l] );
                i--;
            }
            dir = 0;
            l++;
        }
    }

    printf ( "\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
