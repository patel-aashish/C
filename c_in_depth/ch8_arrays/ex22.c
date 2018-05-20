/*
 * =====================================================================================
 *
 *       Filename:  ex22.c
 *
 *    Description:  Write a function to sort and display a array in ascending and 
 *                  descending order.
 *
 *        Version:  1.0
 *        Created:  Sunday 20 May 2018 08:13:52  IST
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

#define     MAX        100    /* Max size of array */

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
    int i, j, temp;

    do {
        printf ( "Enter size of array (>0):" );
        scanf ( "%d", &n );
    } while ( n < 1 );				/* -----  end do-while  ----- */

    printf ( "Enter %d elements of array:\n", n );

    for ( i = 0; i < n; i++) {
        scanf ( "%d", &a[i] );
    }

    for ( i = 0; i < n-1; i++ ) {
        for (j = i+1; j < n; j++) {
            if ( a[j] < a[i] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf ( "Array in ascending order:\n" );

    for ( i = 0; i < n; i++ ) {
        printf ( "%d ", a[i] );
    }
    
    printf ( "\n" );
    printf ( "Array in descending order:\n" );

    for ( i = n-1; i >= 0; i-- ) {
        printf ( "%d ", a[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
