/*
 * =====================================================================================
 *
 *       Filename:  ex25.c
 *
 *    Description:  A recursive function to find binomial coefficient C(n,k)
 *                  Defined as 
 *                  C(n, 0) = 1
 *                  C(n, n) = 1
 *                  C(n, k) = C(n-1, k -1) + C(n-1,k)
 *        Version:  1.0
 *        Created:  Wednesday 16 May 2018 12:29:00  IST
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

int bicoef(int n, int k);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, k;

    do {
        printf ( " Enter n(>0) and k (<=n)" );
        scanf ( "%d %d", &n, &k );
    } while ( n < 0 || k > n );			/* -----  end do-while  ----- */

    printf ( "Binomial coeficient C(%d, %d)= %d",n, k, bicoef(n, k));

    printf ( "\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bicoef
 *  Description:  recursive function to find binomial coefficients of a number
 * =====================================================================================
 */
int
bicoef ( int n, int k )
{
    if ( k == 0 || k == n) {
        return 1;
    }
    return bicoef(n - 1, k - 1) + bicoef(n - 1, k);
}		/* -----  end of function bicoef  ----- */
