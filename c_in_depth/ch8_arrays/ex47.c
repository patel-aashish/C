/*
 * =====================================================================================
 *
 *       Filename:  ex47.c
 *
 *    Description:  A program to find the kth smallest element in an array
 *
 *        Version:  1.0
 *        Created:  Tuesday 03 July 2018 07:38:59  IST
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

#define     MAX       50 /* Max size */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, j, n, t, k;
    int a[MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }

    do {
        printf( "Enter the value of k (0 <= k <= %d):", n );
        scanf( "%d", &k );
    } while ( k < 1 || k > n );
    
    for ( i = 1; i < n; i++ ) {
        t = a[i];
        for ( j = i-1; j >= 0 && a[j] > t; j-- ) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }
    
    t = 1;
    for ( i = 1; i < n; i++ ) {
        if ( a[i] != a[i-1] ) {
           t++;
           if ( t == k ) {
               break;
           }
        }
    }
    if ( i != n ) {
        printf( "The %dth smallest element is %d\n", k, a[i] );
    } else {
        printf( "Only %d unique elements in the array\n", t );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
