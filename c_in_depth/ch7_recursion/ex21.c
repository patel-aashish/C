/*
 * =====================================================================================
 *
 *       Filename:  ex21.c
 *
 *    Description:  Write a recursive function to find quotient when a/b, both are positive
 *
 *        Version:  1.0
 *        Created:  Wednesday 02 May 2018 09:31:41  IST
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

int quot (int a, int b);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a, b;
    do {
        printf ( "Enter a and b (>0):" );
        scanf ( "%d %d", &a, &b );
    } while ( a < 0 && b < 0 );	/* -----  end do-while  ----- */

    printf ( "%d/%d = %d\n", a, b, quot(a,b) );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quot
 *  Description:  recursive function which returns a / b
 * =====================================================================================
 */
int
quot ( int a, int b )
{
    if (!(a / b)) {
        return 0;
    }

    return (1 + quot(a-b, b));
}		/* -----  end of function quot  ----- */
