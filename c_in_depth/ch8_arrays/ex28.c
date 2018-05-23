/*
 * =====================================================================================
 *
 *       Filename:  ex28.c
 *
 *    Description:  A program to find frequent element in a sorted array
 *
 *        Version:  1.0
 *        Created:  Tuesday 22 May 2018 11:41:19  IST
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

#define     MAX       100  /*  */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, a[MAX], pc, t, count, frequent;
    int i;

    do {
        printf ( "Enter size of the array (<%d): ", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );		/* -----  end do-while  ----- */

    printf ( "Enter %d elements of array:\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i] );
    }
    pc = count = 1;
    t = frequent = a[0];
    for ( i = 1; i < n ; i++ ) {
        if ( a[i] == t ) {
            count++;
            if ( i < n-1) {
                continue;
            }
        }  
        
        if ( count > pc ) {
           frequent = a[i-1];
           pc = count;
        }
        count = 1;
        t = a[i];
    }
    
    printf ( "Most frequent element is %d \n", frequent );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
