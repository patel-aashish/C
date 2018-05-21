/*
 * =====================================================================================
 *
 *       Filename:  ex27.c
 *
 *    Description:  A program to find number of inversions in an array given by
 *                  1) Sorted array
 *                    i) Ascending order = 0
 *                    ii) Descending order = (size * (size-1/2))
 *                  2) Unsorted array, if a[i] > a[j] && i < j;
 *
 *        Version:  1.0
 *        Created:  Monday 21 May 2018 11:06:49  IST
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

#define     MAX        100 /* Max size of array */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, a[MAX];
    int i, j, count = 0;
    
    do {
        printf ( "Enter the size of array(<%d):", MAX );
        scanf ( "%d", &n );
    } while (n < 1 || n > MAX  );	/* -----  end do-while  ----- */

    printf ( "Enter %d elements of array:\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i] );
    }

    for ( i = 0; i < n-1; i++ ) {
        for ( j = i+1; j < n; j++ ) {
            if ( a[i] > a[j] ) {
                count++;
            }
        }
        if ( i == 0) {
            if ( !count ) {
                // Sorted array - ascending
                break;
            } else if ( count == (n-1) ) {
                // Sorted array - Descending order
                count = n * ((n-1)/2);
                break;
            }
        }
    }
    printf ( "Number of inversions = %d \n", count );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
