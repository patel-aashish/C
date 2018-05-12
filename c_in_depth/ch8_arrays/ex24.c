/*
 * =====================================================================================
 *
 *       Filename:  ex24.c
 *
 *    Description:  A program to find if all the elements of an array are distinct or not
 *
 *        Version:  1.0
 *        Created:  Saturday 12 May 2018 08:31:33  IST
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

#define     MAX    100    /*Maximum size of array*/

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
        printf ( "Enter size of array (<%d):", MAX );
        scanf ( "%d", &n );
    } while ( n < 1 || n > MAX );				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array\n", n );

    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &arr[i] );
    }
    

    for ( i = 0; i < n-1; i++ ) {
        for ( j = i+1; j < n; j++ ) {
            if (arr[i] == arr[j] ) {
                printf ( "All the elements are not distinct\n" );
                return EXIT_FAILURE;
            }
        }
    }
    printf ( "All the elements of the array are distinct\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
