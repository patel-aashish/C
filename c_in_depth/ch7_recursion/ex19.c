/*
 * =====================================================================================
 *
 *       Filename:  ex19.c
 *
 *    Description:  Write recursive function that returns reverse of given number
 *
 *        Version:  1.0
 *        Created:  Tuesday 01 May 2018 09:37:08  IST
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

int reverse (int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n;

    printf ( "Enter a number: " );
    scanf ( "%d", &n );
    printf ( "Reverse: %d\n", reverse(n));

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  reverse
 *  Description:  recursive function that reverses a given number
 * =====================================================================================
 */
int
reverse ( int n )
{
    int t = n, mul = 1;
    if ( !(n/10)) {
        return n;
    }
    
    while (t /= 10) {
        mul *= 10;
    }

    return ((n%10) * mul) + reverse(n/10);
}		/* -----  end of function reverse  ----- */
