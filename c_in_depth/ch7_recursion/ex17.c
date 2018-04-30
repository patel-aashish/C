/*
 * =====================================================================================
 *
 *       Filename:  ex17.c
 *
 *    Description:  Write recursive to check if the number is perfect or not.
 *
 *        Version:  1.0
 *        Created:  Monday 30 April 2018 09:48:52  IST
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

char* isPerfect(unsigned long long t,  
                unsigned long long n, 
                unsigned long long sum);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    unsigned long long int t = 1, n, sum = 0;

    do {
        printf ( "Enter a number (>0):" );
        scanf ( "%llu", &n );
    } while ( n < 1 ); /* -----  end do-while  ----- */

    printf ( "%llu is %s number\n", n, isPerfect(t, n, sum));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPerfect
 *  Description:  Recursive functions that returns if a number is perfect or not
 * =====================================================================================
 */
char* isPerfect(unsigned long long t,  
                unsigned long long n, 
                unsigned long long sum)
{
    unsigned long long i;

    if (t > (n/2)) {
        if (sum == n) {
            return "perfect";
        } else {
            return "not a perfect";
        }
    }
    if (n % t == 0) {
        isPerfect(t+1, n, sum+t); 
    } else {
        isPerfect(t+1, n, sum);
    }
}		/* -----  end of function isPerfect  ----- */
