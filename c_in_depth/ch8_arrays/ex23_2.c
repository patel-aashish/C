/*
 * =====================================================================================
 *
 *       Filename:  23_2.c
 *
 *    Description:  A program to sort a 1-D array in descending order using bubble sort
 *
 *        Version:  1.0
 *        Created:  Sunday 20 May 2018 08:23:29  IST
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

#define     MAX       100  /* Max size of array  */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n , a[MAX];
    int i, j, temp, flag;

    do {
        printf ( "Enter size of array (<%d): ", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );			/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array:\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i] );
    }

    for ( i = 0; i < n-1; i++ ) {
        flag = 0;
        for ( j = 0; j < n-1-i; j++ ) {
            if ( a[j] < a[j+1] ) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag++;
            }
        }
        if (!flag) {
            break;
        }
    }
    
    printf ( "Sorted array:\n" );
    for ( i = 0; i < n; i++ ) {
        printf ( "%d ", a[i] );
    }
    printf ( "\n" );
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
