/*
 * =====================================================================================
 *
 *       Filename:  ex50.c
 *
 *    Description:  Write program with functions
 *                  Product() that does not use * operator
 *                  Quotient() that does not use / operator
 *                  Remainder() that does not use % operator
 *
 *        Version:  1.0
 *        Created:  Wednesday 25 April 2018 09:19:57  IST
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
 *         Name:  Product
 *  Description:  Returns product of given number without using * operator
 * =====================================================================================
 */
long int
Product (int n1, int n2)
{
    long int prod = 0;
    while (n2) {
        prod += n1;
        n2--;
    }
    return prod;
}		/* -----  end of function Product  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Quotient
 *  Description:  Returns quotient of given numbers without using / operator
 * =====================================================================================
 */
int
Quotient (int n1, int n2)
{   
    int quot = 0;

    while ((n1-=n2) >= 0) {
        quot++;
    }
    return quot;
}		/* -----  end of function Quotient  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Remainder
 *  Description:  Returns remainder of given numbers without using % operator
 * =====================================================================================
 */
int
Remainder ( int n1, int n2 )
{
    int rem = n1;

    while ((rem-n2) >= 0) {
        rem -= n2;
    }
    return rem;
}		/* -----  end of function Remainder  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n1, n2;
    printf ( "Enter two numbers:" );
    scanf ( "%d %d", &n1, &n2 );

    printf ( "Product= %ld\nQuotient= %d\nRemainder= %d\n",
            Product(n1, n2),
            Quotient(n1, n2),
            Remainder(n1, n2));

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
