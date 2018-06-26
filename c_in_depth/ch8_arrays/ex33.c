/*
 * =====================================================================================
 *
 *       Filename:  ex33.c
 *
 *    Description:  A program to interchange first and last row of a matrix
 *
 *        Version:  1.0
 *        Created:  Tuesday 26 June 2018 09:26:21  IST
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

#define     MAX        50            /* Max row and column size */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, j, r, c, t;
    int a[MAX][MAX];

    do {
        printf ( "Enter row and column size (<%d):", MAX );
        scanf ( "%d %d", &r, &c );
    } while ( r < 1 || c < 1 || r > MAX || c > MAX );				/* -----  end do-while  ----- */

    printf ( "Enter elements of %dx%d matrix:\n", r, c );

    for ( i = 0 ; i < r ; i++ ) {
        for ( j = 0 ; j < c ; j++ ) {
            scanf ( "%d", &a[i][j] );
        }
    }

    for ( i = 0 ; i < c ; i++ ) {
        if ( a[0][i] != a[r-1][i] ) {
            t = a[0][i];
            a[0][i] = a[r-1][i];
            a[r-1][i] = t;
        }
    }
    printf ( "Result matrix:\n" );
    for ( i = 0 ; i < r ; i++ ) {
        for ( j = 0 ; j < c ; j++ ) {
            printf ( "%d ", a[i][j] );
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
