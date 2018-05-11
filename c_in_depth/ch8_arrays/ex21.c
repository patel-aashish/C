/*
 * =====================================================================================
 *
 *       Filename:  ex21.c
 *
 *    Description:  A program to reverse only first n elements of an array
 *
 *        Version:  1.0
 *        Created:  Friday 11 May 2018 10:37:56  IST
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

#define     MAX  100        /* Max size of array */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int s, n, arr[MAX];
    int i, j, temp;


    do {
        printf ( "Enter size of array (<%d):", MAX );
        scanf ( "%d", &s );
        printf ( "Enter number of elements to be reversed(>0):" );
        scanf ( "%d", &n );
    } while ( s < 1 || s > MAX || n < 1);				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array:\n", s );
    for ( i = 0; i < s; i++ ) {
        scanf ( "%d", &arr[i] );
    }

    for ( i = 0, j = n-1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf ( "Result:\n" );
    for ( i = 0; i < s; i++ ) {
        printf ( "%d ", arr[i] );
    }

    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
