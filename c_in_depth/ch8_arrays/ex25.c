/*
 * =====================================================================================
 *
 *       Filename:  ex25.c
 *
 *    Description:  A program to remove duplicates from a unsorted array
 *
 *        Version:  1.0
 *        Created:  Sunday 13 May 2018 11:25:05  IST
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

#define     MAX     100        /* Max size of array  */

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
    int i, j;

    do {
        printf ( "Enter size of array(<%d):", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &arr[i] );
    }

    for ( i = 0; i < n-1; i++ ) {
        for ( j = i+1; j < n; j++ ) {
            if ( arr[i] == arr[j] ) {
                for (;j < n-1;j++) {
                    arr [j] = arr[j+1];
                }
                n = n - 1;
                j = i + 1;
            }
        }
    }
    printf ( "Result:\n" );
    for ( i = 0; i < n; i++) {
        printf ( "%d ", arr[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
