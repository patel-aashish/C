/*
 * =====================================================================================
 *
 *       Filename:  ex34.c
 *
 *    Description:  A program to reverse rows of matrix
 *                  1 2 3    7 8 9   
 *                  4 5 6 -> 4 5 6
 *                  7 8 9    1 2 3
 *        Version:  1.0
 *        Created:  Wednesday 27 June 2018 08:52:00  IST
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

#define     MAX        50  /* Max size of row and column */

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
    } while (r < 1 || c < 1 || r > MAX || c > MAX );				/* -----  end do-while  ----- */

    printf ( "Enter the elements of %dx%d:\n", r, c );
    
    for ( i = 0 ; i < r ; i++ ) {
        for ( j = 0 ; j < c ; j++ ) {
            scanf ( "%d", &a[i][j] );
        }
    }

    for ( i = 0 ; i < r/2 ; i++ ) {
        for ( j = 0; j < c ; j++ ) {
            if ( a[i][j] != a[r-i-1][j] ) {
                t = a[i][j];
                a[i][j] = a[r-i-1][j];
                a[r-i-1][j] = t;
            }
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
