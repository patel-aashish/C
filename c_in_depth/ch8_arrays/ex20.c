/*
 * =====================================================================================
 *
 *       Filename:  ex20.c
 *
 *    Description:  A program to find largest and second largest element of an array
 *
 *        Version:  1.0
 *        Created:  Thursday 10 May 2018 10:26:42  IST
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

#define  MAX  100         /* Max size of array */

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
    int i, max1, max2;


    do {
        printf ( "Enter size of array (<%d): ", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 && n > MAX );				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array\n", n );
    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &arr[i] );
    }
    
    max1 = arr[0];
    for ( i = 1; i < n ; i++ ) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
    }
   
    max2 = arr[0];
    for ( i = 0; i < n ; i++ ) {
        if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    printf ( "max1 = %d max2 = %d\n", max1, max2 );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
