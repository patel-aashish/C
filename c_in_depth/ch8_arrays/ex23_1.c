/*
 * =====================================================================================
 *
 *       Filename:  ex23_1.c
 *
 *    Description:  A program to sort a 1D array in descending order using selection
 *                  sort
 *
 *        Version:  1.0
 *        Created:  Saturday 19 May 2018 08:57:43  IST
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

#define     MAX       100        /* Max size of array */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, arr[MAX];
    int i, j, temp;
    
    do {
        printf ( "Enter n (<=MAX):" );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );		/* -----  end do-while  ----- */

    printf ( "Enter %d elements of array\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf ( "%d", &arr[i] );
    }

    for ( i = 0; i < n-1; i++ ) {
        for (  j = i+1; j < n; j++) {
            if ( arr[j] > arr[i] ) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf ( "Sorted array:\n" );

    for ( i = 0; i < n; i++ ) {
        printf ( "%d ", arr[i] );
    }
    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
