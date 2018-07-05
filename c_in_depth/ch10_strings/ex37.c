/*
 * =====================================================================================
 *
 *       Filename:  ex37.c
 *
 *    Description:  A program to extract a substring from a string
 *
 *        Version:  1.0
 *        Created:  Thursday 05 July 2018 07:59:19  IST
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
#include    <string.h>

#define     MAX       79  /* Max size */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, l, n;
    char str[MAX];

    printf( "Enter string (length < %d):", MAX );
    scanf( "%s", str );

    l = strlen(str);
    do {
        printf ( "Enter start index and length (0 <= i,n <= %d): ", l-1 );
        scanf ( "%d %d", &i, &n );
    } while ( i < 0 || i > l-1 || n < 1 || (n-i) > l );	/* -----  end do-while  ----- */
    
    printf( "Result:\n" );
    
    while ( n-- ) {
        printf ( "%c", str[i++] );
    }
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
