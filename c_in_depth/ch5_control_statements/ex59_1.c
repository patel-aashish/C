/*
 * =====================================================================================
 *
 *       Filename:  ex59_1.c
 *
 *    Description:  Print sum of the series till n terms (1 + 11 + 111 + 1111 + ..)
 *
 *        Version:  1.0
 *        Created:  Sunday 15 April 2018 05:22:16  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aashish Patel (), aashish.a.patel@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include    <stdlib.h>
#include	<stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n, i;
    unsigned long long sum = 0, m = 0;
    do {
        printf ( "Enter the number of terms to be summed(>0):" );
        scanf ( "%d", &n );
    } while (n < 1);
    
    for (i = 0; i < n; i++) {
        m *= 10;
        m += 1;
        sum += m;
    }
    printf ( "Sum of 1 + 11 + 111 + ... upto %d terms is %llu\n", n, sum );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
