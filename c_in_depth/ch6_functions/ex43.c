/*
 * =====================================================================================
 *
 *       Filename:  ex43.c
 *
 *    Description:  Write function that returns multiplicative digital root and 
 *                  multiplicative persistence of a number
 *
 *        Version:  1.0
 *        Created:  Tuesday 24 April 2018 09:10:22  IST
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
 *         Name:  prodDigits
 *  Description:  returns product of digits of the input number 
 * =====================================================================================
 */
int 
prodDigits(int n) {
    int prod = 1;
    while (n) {
        prod *= (n %10);
        n /= 10;
    }
    return prod;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MDR
 *  Description:  Find the multiplicative digital root of given number
 * =====================================================================================
 */
int
MDR ( int n )
{
    int mdr = n;
    while (mdr/10) {
        mdr = prodDigits(mdr);
    }
    return mdr;
}		/* -----  end of function MDR  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Mpersistence
 *  Description:  
 * =====================================================================================
 */
int
Mpersistence ( int n )
{   
    int mp = 0;
    while (n/10) {
        n = prodDigits(n);
        mp++;
    }
    return mp;
}		/* -----  end of function Mpersistence  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int n, mdr, mp;
    do {
        printf ( "Enter a number(>0):" );
        scanf ( "%d", &n );
    } while (n < 1);
    
    mdr = MDR(n);
    mp  = Mpersistence(n);
    printf ( "mdr = %d, mp = %d \n", mdr, mp );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
