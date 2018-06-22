/*
 * =====================================================================================
 *
 *       Filename:  ex31_1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 22 June 2018 09:27:14  IST
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

#define     MAX       50        /* Max row for column size */

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
    int a[MAX][MAX];
    int i, j, r, c;

    do {
        printf ( "Enter row size (<%d):", MAX );
        scanf ( "%d", &r );
        printf ( "Enter column size (<%d):", MAX );
        scanf ( "%d", &c );
    } while ( r < 1 || r > MAX || c < 1 || c > MAX); /* -----  end do-while  ----- */

    printf ( "Enter elements of %dx%d matrix:\n", r, c );
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            scanf ( "%d", &a[i][j] );
        }
    }
    
    for(i = 0; i < r; i++) {
        sort_array(a[i], c);
    }

    printf ( "Row wise sorted array:\n" );
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf ( "%d ", a[i][j] );
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sort_array
 *  Description:  
 * =====================================================================================
 */
void
sort_array ( int *a, int n )
{
    int i, j, t;

    for (i = 1; i < n; i++) {
        t = a[i];
        for (j = i-1; a[j] > t && j >= 0; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }

}		/* -----  end of function sort_array  ----- */
