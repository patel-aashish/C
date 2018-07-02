/*
 * =====================================================================================
 *
 *       Filename:  ex44.c
 *
 *    Description:  A program to print Spiral matrix. A spiral matrix is nxn square 
 *                  matrix that is formed by placing elements 1...n2 in spiral order.
 *
 *        Version:  1.0
 *        Created:  Monday 02 July 2018 08:36:41  IST
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
    int i, j, n, l, r, u, d, dir;
    int a[MAX][MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    l = 0; r = n-1; u = 0; d = n-1; dir = 0, j = 1;
    while ( u <= d && l <= r ) {
        if ( dir == 0 ) { // right
            i = l;
            while ( i <= r ) {
                a[u][i] = j;
                i++;
                j++;
            }
            u++;
            dir = 1;
        } else if ( dir == 1 ) { //down
            i = u;
            while ( i <= d ) {
                a[i][r] = j;
                i++;
                j++;
            }
            r--;
            dir = 2;
        } else if ( dir == 2 ) { // left
            i = r;
            while ( i >= l ) {
                a[d][i] = j;
                i--;
                j++;
            }
            d--;
            dir = 3;
        } else { // up
            i = d;
            while ( i >= u ) {
                a[i][l] = j;
                i--;
                j++;
            }
            l++;
            dir = 0;
        }
    }


    for ( i = 0; i < n; i++ ) { 
        for ( j = 0; j < n; j++ ) {
            printf ( "%3d ", a[i][j] );
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  endj] of function main  ---------- */
