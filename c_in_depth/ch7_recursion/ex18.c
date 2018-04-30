/*
 * =====================================================================================
 *
 *       Filename:  ex18.c
 *
 *    Description:  Write a recursive function that displays a number in words
 *                  Eg: 213 -> two one three
 *
 *        Version:  1.0
 *        Created:  Monday 30 April 2018 10:09:03  IST
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

void displayNum(int n);

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
        printf ( "Enter a number (>0): " );
        scanf ( "%d", &n );
    } while ( n < 0 );				/* -----  end do-while  ----- */
    
    displayNum(n);
    printf ( "\n" );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  displayNum
 *  Description:  display given digit in words
 * =====================================================================================
 */
void
displayNum ( int n )
{
    char *str;

    if (n == 0) {
        return;
    }
    displayNum(n/10);
    switch (n % 10) {
        case 0:
           str = "zero";
           break;
        case 1:
           str = "one";
           break;
        case 2:
           str = "two";
           break;
        case 3:
           str = "three";
           break;
        case 4:
           str = "four";
           break;
        case 5:
           str = "five";
           break;
        case 6:
           str = "six";
           break;
        case 7:
           str = "seven";
           break;
        case 8:
           str = "eight";
           break;
        case 9:
           str = "nine";
           break;           
    }
    printf ( "%s ", str );
}		/* -----  end of function displayNum  ----- */
