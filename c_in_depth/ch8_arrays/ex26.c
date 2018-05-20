/*
 * =====================================================================================
 *
 *       Filename:  ex26.c
 *
 *    Description:  A program to remove duplicates from a sorted array
 *
 *        Version:  1.0
 *        Created:  Sunday 20 May 2018 11:23:03  IST
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

#define     MAX      100   /* Max size of array  */

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
    int i, j;

    do {
        printf ( "Enter size of array (<%d):", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX  );			/* -----  end do-while  ----- */
    printf ( "Enter %d sorted elements:\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i] );
    }

    for ( i = 0; i < n-1 ; i++ ) {
        if ( a[i] == a[i+1] ) {
            for ( j = i; j < n; j++ ) {
                a[j] = a[j+1];
            }
            n--;
        }
    }

    printf ( "Result array:\n" );
    for ( i = 0; i < n ; i++ ) {
        printf ( "%d ", a[i] );
    }
    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
