/*
 * =====================================================================================
 *
 *       Filename:  ex51.c
 *
 *    Description:  Check whether a given number is palindrome or not
 *
 *        Version:  1.0
 *        Created:  Tuesday 10 April 2018 10:14:59  IST
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
    int n, t, r = 0, i = 1;
    printf ( "Please enter a number:" );
    scanf ( "%d", &n );
    t = n;
    while(t) {
        r *= 10;
        r += (t % 10);        
        t /= 10;
    }
    if (n == r) {
        printf ( "%d is Palindrome\n", n );
    } else {
        printf ( "%d is not Palindrome\n", n );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
