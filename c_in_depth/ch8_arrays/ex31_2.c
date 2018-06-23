/*
 * =====================================================================================
 *
 *       Filename:  ex31_2.c
 *
 *    Description:  A program to sort a matrix column wise
 *
 *        Version:  1.0
 *        Created:  Saturday 23 June 2018 11:09:29  IST
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

#define     MAX        50 /*  */

void sort_array(int *a, int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a[MAX][MAX], t[MAX][MAX];
    int i, j, r, c;

    do {
        printf ( "Enter row size (<%d):", MAX );
        scanf ( "%d", &r );
        printf ( "Enter column size (<%d):", MAX );
        scanf ( "%d", &c );
    } while (r < 1 || r > MAX || c < 1 || c > MAX );	/* -----  end do-while  ----- */

    printf ( "Enter elements of %dx%d matrix:\n", r, c );
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            scanf ( "%d", &a[i][j] );
        }
    }

    for ( i = 0; i < c; i++ ) {
        for ( j = 0; j < r; j++) {
            t[i][j] = a[j][i];
        }
    }

    for ( i = 0; i < c; i++ ) {
        sort_array(t[i], r);
    }

    printf ( "Sorted array is :\n" );
    for ( i = 0; i < r; i++ ) {
        for ( j = 0; j < c; j++) {
            a[i][j] = t[j][i];
            printf ( "%d ", a[i][j] );
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sort_arrays
 *  Description:  sorts given array in ascending order using merge sort
 * =====================================================================================
 */
void
sort_array ( int *a, int n )
{
    int i, j, t;

    for ( i = 1; i < n; i++) {
        t = a[i];
        for ( j = i -1; t < a[j] && j >= 0; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }
}		/* -----  end of function sort_arrays  ----- */
