/*
 * =====================================================================================
 *
 *       Filename:  ex30.c
 *
 *    Description:  A program to find first and last occurrence of element using
 *                  binary search in a sorted array
 *
 *        Version:  1.0
 *        Created:  Tuesday 19 June 2018 09:16:22  IST
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

#define     MAX        150        /* Max size of array  */

int FirstOcc(int* a, int len, int x);
int LastOcc(int* a, int len, int x, int f);

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a[MAX];
    int n, i, x;
    do {
        printf ( "Enter size of array (<%d):", MAX );
        scanf ( "%d", &n ); 
    } while ( n < 1 || n > MAX );	/* -----  end do-while  ----- */

    printf ( "Enter %d elements of a array in ascending order:\n", n );
    
    for ( i = 0; i < n; i++ ) {
        scanf ( "%d", &a[i] );
    }
    
    printf ( "Enter element to be found:" );
    scanf ( "%d", &x );

    i = FirstOcc(a, n, x);
    if ( i == -1) {
        printf ( "Element not found\n" );
    } else {
        printf ( "First occurrence: %d\n", i+1 );
        printf ( "Last occurrence: %d\n", LastOcc(a, n, x, i)+1 );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FirstOcc
 *  Description:  Find first occurrence of element using Binary search
 * =====================================================================================
 */
int
FirstOcc ( int* a, int len, int x )
{
    int n = -1;
    int l = 0, u= len-1, m;

    while ( l <= u ) {
        m = (l + u) / 2;
        if (a[m] < x) {
            l = m+1;
        } else if (a[m] > x) {
            u = m-1;
        } else {
            n = m;
            u = m-1;
        }
    }

    return n;
}		/* -----  end of function FirstOcc  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LastOcc
 *  Description:  Find last occurrence of element using Binary search
 * =====================================================================================
 */
int
LastOcc ( int* a, int len, int x, int f )
{
    int n = f;
    int l = f+1, u = len-1, m;

    while (l <= u) {
        m = (l + u) / 2;
        if (a[m] < x) {
            l = m+1;
        } else if (a[m] > x) {
            u = m-1;
        } else {
            n = m;
            l = m+1;
        }
    }

    return n;
}		/* -----  end of function LastOcc  ----- */
