/*
 * =====================================================================================
 *
 *       Filename:  ex13.c
 *
 *    Description:  Recursive function for taking and adding n numbers
 *
 *        Version:  1.0
 *        Created:  Saturday 28 April 2018 10:00:56  IST
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

long int sum(int n);

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
    do {
        printf ( "Enter n (>0):" );
        scanf ( "%d", &n);
    } while (n < 1);

    printf("sum=%ld\n", sum (n));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sum
 *  Description:  Inputs and returns sum
 * =====================================================================================
 */
long int
sum ( int n )
{
    int i;
    if (n == 0) {
        return 0;
    }
    printf ( "Enter a num:" );
    scanf ( "%d", &i );

    return i + sum(n-1);
}		/* -----  end of function sum  ----- */
