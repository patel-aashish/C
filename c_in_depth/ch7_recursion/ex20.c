/*
 * =====================================================================================
 *
 *       Filename:  ex20.c
 *
 *    Description:  Write a recursive function to remainder when a/b both are postive ints
 *
 *        Version:  1.0
 *        Created:  Wednesday 02 May 2018 09:21:43  IST
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

int rem(int a, int b);

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
        printf ( "Enter numbers a and b:" );
        scanf ( "%d %d", &a, &b );
    } while (a < 0 && b < 0);/* -----  end do-while  ----- */

    printf ( "Remainder %d/%d = %d\n", a, b, rem(a, b));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  rem
 *  Description:  function that returns a rem 
 * =====================================================================================
 */
int
rem ( int a, int b )
{
    if (!(a/b)) {
        return a;
    }
    return rem(a-b, b);
}		/* -----  end of function rem  ----- */
