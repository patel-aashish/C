/*
 * =====================================================================================
 *
 *       Filename:  ex29.c
 *
 *    Description:  A program to find leader in an array.
 *                  A leader is element which is greater than all elements
 *                  on the right. Last element is always a leader.
 *                  If ascending order then only one leader.
 *                  If descending order then all elements are leader.
 *
 *        Version:  1.0
 *        Created:  Monday 18 June 2018 10:06:27  IST
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

#define     MAX        150        /* Max size of array */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a[MAX];
    int i, j, n, count;

    do {
        printf ( "Enter size of array (<%d):", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );				/* -----  end do-while  ----- */

    printf ( "Enter %d elements of array:\n", n );
    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i]);
    }

    printf ( "Leaders are:\n" );
    count = 1;
    for ( i = 0; i < n-1; i++ ) {
        for ( j = i+1; j < n; j++) {
            if ( a[i] < a[j] ) {
                break;
            }
        }
        if ( j == n ) {
            printf ( "%d ", a[i] );
        }
    }
    // Print last element as its always a leader
    printf ( "%d \n", a[i] );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
