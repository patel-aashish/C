/*
 * =====================================================================================
 *
 *       Filename:  ex22.c
 *
 *    Description:  Write a recursive function to find a^n using a^2 method
 *                  i.e.
 *                  a^8 = (a^2)^4     a^11 = a * (a^2)^5
 *                  a^4 = (a^2)^2     a^5  = a * (a^2)^2
 *                  a^2 = (a^2)^1     a^2  = (a^2)^1
 *                  a^1 = a *(a^2)^0  a^1  = a * (a^2)^0
 *
 *
 *        Version:  1.0
 *        Created:  Wednesday 02 May 2018 09:40:08  IST
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

long long int power (int a, int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
   int a, n; 
    do {
        printf ( "Enter a and n (>0)\n" );
        scanf ( "%d %d", &a, &n );
    } while (a < 1 && n < 0);	/* -----  end do-while  ----- */

    printf ("%d^%d = %lld\n",a , n, power(a, n));

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  power
 *  Description:  recursive function that returns a^n
 * =====================================================================================
 */
long long int
power ( int a, int n )
{
    if (n == 0) {
        return 1;
    } 

    if (n % 2 == 0) {
        return a * a * power(a, n-2);
    } else {
        return a * power(a, n-1);
    }
}		/* -----  end of function power  ----- */
