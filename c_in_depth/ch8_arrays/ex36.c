/*
 * =====================================================================================
 *
 *       Filename:  ex36.c
 *
 *    Description:  A program to reverse columns of matrix
 *                  1 2 3    3 2 1
 *                  4 5 6 -> 6 5 4
 *                  7 8 9    9 8 7
 *
 *        Version:  1.0
 *        Created:  Wednesday 27 June 2018 09:50:41  IST
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
    int i, j, r, c, t;
    int a[MAX][MAX];

    do {
        printf("Enter row and column size (<%d):", MAX);
        scanf("%d %d", &r, &c);
    } while ( r < 1 || c < 1 || r > MAX || c > MAX);

    printf("Enter the elements of %dx%d matrix:\n", r, c);
    for ( i = 0; i < r ; i++ ) {
        for ( j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for ( i = 0 ; i < c/2 ; i++) {
        for ( j = 0; j < r ; j++ ) {
            if ( a[j][i] != a[j][c-i-1] ) {
                t = a[j][i];
                a[j][i] = a[j][c-i-1];
                a[j][c-i-1] = t;
            }
        }
    }
    
    printf ( "Result matrix:\n" );
    for ( i = 0; i < r ; i++ ) {
        for ( j = 0; j < c; j++) {
            printf ( "%d ", a[i][j] );
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
