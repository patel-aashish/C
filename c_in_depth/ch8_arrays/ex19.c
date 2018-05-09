/*
 * =====================================================================================
 *
 *       Filename:  ex19.c
 *
 *    Description:  A program to find difference between the smallest and largest element
 *                  of an array
 *
 *        Version:  1.0
 *        Created:  Wednesday 09 May 2018 11:01:36  IST
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

#define MAX 100

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, i;
    int arr[MAX];
    int min, max;

    do {
        printf ( "Enter the size of the array (>0 & < %d):", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 && n > MAX );				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of the array\n", n );
    for (i = 0; i < n; i++) {
        scanf ( "%d", &arr[i] );
    }

    min = max = arr[0];

    for (i = 1; i < n ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf ( "(%d) - (%d) = %d\n", max, min, max - min );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
