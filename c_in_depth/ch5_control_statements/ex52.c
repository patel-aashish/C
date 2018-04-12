/*
 * =====================================================================================
 *
 *       Filename:  ex52.c
 *
 *    Description:  Display all 4 digit palindromes
 *
 *        Version:  1.0
 *        Created:  Thursday 12 April 2018 10:00:41  IST
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int i, r = 0, t;
    for ( i = 1000; i < 10000; i++ ) {
        t = i;
        r = 0;
        while (t) {
            r *= 10;
            r += (t % 10);
            t /= 10;
        }
        if ( i == r) {
            printf ( "%d ", i );
        }
    }
    printf ( "\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
