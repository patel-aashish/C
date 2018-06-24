/*
 * =====================================================================================
 *
 *       Filename:  ex32.c
 *
 *    Description:  A program to find element in a row-wise and column-wise
 *                  sorted matrix.
 *
 *        Version:  1.0
 *        Created:  Sunday 24 June 2018 10:59:28  IST
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

#define     MAX        50        /* Max row and column size  */

int find_element(int *a, int n, int x);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, j, r, c, n;
    int a[MAX][MAX];
    
    do {
        printf ( "Enter row and column size(< %d): ", MAX );
        scanf ( "%d %d", &r, &c );
    } while ( r < 1 || c < 1 || r > MAX || c > MAX );	/* -----  end do-while  ----- */

    printf ( "Enter elements (%dx%d) of row-wise and column-wise sorted matrix \
              \n", r, c );

    for ( i = 0; i < r; i++ ) {
        for ( j = 0; j < c ; j++ ) {
            scanf ( "%d", &a[i][j] );
        }
    }
   
    printf ( "Enter the element to be found: " );
    scanf ( "%d", &n );
    for ( i = 0; i < r; i++) {
        j = find_element(a[i], c, n);
        if ( j != -1 ) {
            printf ( "%d is at (%d,%d)\n", n, i, j );
            break;
        }
    }
    if ( i == r ) {
        printf ( "Element %d is not found!!\n", n );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  find_element
 *  Description:  finds given element in array using binary search
 * =====================================================================================
 */
int
find_element ( int *a, int n, int x )
{
    int m, l = 0, u = n-1;

    while ( l <= u ) {
        m = (l + u) / 2;
        if ( a[m] == x ) {
            return m;
        } else if ( a[m] > x ) {
            u = m - 1;
        } else {
            l = m + 1;
        }
    }
    
    return -1;
}		/* -----  end of function find_element  ----- */
