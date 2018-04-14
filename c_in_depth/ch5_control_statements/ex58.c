/*
 * =====================================================================================
 *
 *       Filename:  ex58.c
 *
 *    Description:  Take a number and find out if its a fibonacci no or not
 *
 *        Version:  1.0
 *        Created:  Saturday 14 April 2018 10:30:14  IST
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
    int n, a = 0, b = 1, s = 0;
    do {
        printf ( "Enter a number(>0):" );
        scanf ( "%d", &n );
    } while (n < 0);
    while (s < n) {
        s = a + b;
        a = b;
        b = s;
    }
    if (s != n) {
        printf ( "%d is not a fibonacci number\n", n );
    } else {
        printf ( "%d is a fibonacci number\n", n );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
