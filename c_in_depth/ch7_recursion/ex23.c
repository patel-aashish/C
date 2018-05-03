/*
 * =====================================================================================
 *
 *       Filename:  ex23.c
 *
 *    Description:  Write a recursive function to multiply 2 numbers using 
 *                  Russian peasant method. Here the first number is divided by 2
 *                  and the second number is multiplied by 2 until the first number
 *                  becomes 1. Then add the second value for each run where the first value
 *                  is odd.
 *
 *                  19     25
 *                  9      50
 *                  4      100
 *                  2      200
 *                  1      400
 *                  Product = 400 + 50 + 25 = 475
 *
 *        Version:  1.0
 *        Created:  Thursday 03 May 2018 11:43:21  IST
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

long long int product (int a, int b);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int a, b;

    do {
        printf ( "Enter numbers a and b(>0):" );
        scanf ( "%d %d", &a, &b );
    } while ( a < 1 && b < 1 );				/* -----  end do-while  ----- */
   
    printf ( "Product (%dx%d) = %lld\n", a, b, product(a, b) );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  product
 *  Description:  recursive that calculates result based on russian peasant method
 * =====================================================================================
 */
long long int
product ( int a, int b )
{
    if ( a == 1 ) {
        return b;
    }
    
    
    if ( a % 2 == 0 ) {
        return product(a/2, b*2);
    } else {
        return b + product(a/2, b*2);
    }
}		/* -----  end of function product  ----- */
