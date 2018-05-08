/*
 * =====================================================================================
 *
 *       Filename:  ex18.c
 *
 *    Description:  A program to exchange adjacent elements of an array
 *
 *        Version:  1.0
 *        Created:  Tuesday 08 May 2018 11:18:39  IST
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
    int arr[MAX], n;
    int i, temp;
    
    do {
        printf ( "Enter length of array(<%d):", MAX );
        scanf ( "%d", &n );
    } while ( n > MAX );				/* -----  end do-while  ----- */
    
    printf ( "Enter %d elements of array\n", n );
    for (i = 0; i < n; i++) {
        scanf ( "%d", &arr[i]);
    }

    for (i = 0; i < n-1;i+=2) {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    printf ( "Result: ");
    for (i = 0; i < n; i++) {
        printf ( "%d ", arr[i] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
