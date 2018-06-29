/*
 * =====================================================================================
 *
 *       Filename:  ex41.c
 *
 *    Description:  A program to find whether a array is strict ascending order or not
 *                  using recursion
 *
 *        Version:  1.0
 *        Created:  Friday 29 June 2018 09:26:11  IST
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

#define     MAX       50 /* Max row and column size */

int strict(int *a, int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i,n;
    int a[MAX];

    do {
        printf( "Enter size (<%d):", MAX );
        scanf( "%d", &n );
    } while ( n < 1 || n > MAX );

    printf( "Enter %d elements of matrix:\n", n );
    for ( i = 0; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }
       
    if ( strict(a, n-1) != -1) {
        printf ( "The array is in strict ascending order\n" );
    } else {
        printf ( "The array is not in strict ascending order\n" );
    }
    return EXIT_SUCCESS;
}			/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strict
 *  Description:  recursive function to check if the array is in strict ascending order
 * =====================================================================================
 */
int
strict ( int *a, int n )
{
    int ret;
    if ( n == 0) {
        return a[n];
    }
    ret = strict(a, n-1);
    if ( ret != -1 && a[n] > ret ) {
        return a[n];
    } else {
        return -1;
    }
}		/*-----  end of function strict  ----- */
