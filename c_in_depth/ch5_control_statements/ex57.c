/*
 * =====================================================================================
 *
 *       Filename:  ex57.c
 *
 *    Description:  Find x raised to power y where x and y are positive integers
 *
 *        Version:  1.0
 *        Created:  Friday 13 April 2018 09:29:20  IST
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
    unsigned long long int res = 1;
    int x, y;
    int i = 0;

    do {
        printf ( "Enter x and y ( > 0)\n" );
        scanf ( "%d %d", &x, &y );       
    } while ( x < 0 && y < 0 );
    
    if (y == 0) {
        printf ( "%d power %d = %llu\n", x, y, res );
        return EXIT_SUCCESS;
    }
    
    for ( i = y; i > 0; i--) {
        res *= x;
    }
    
    printf ( "%d power %d = %llu\n", x, y, res );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
