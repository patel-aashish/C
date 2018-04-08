/*
 * =====================================================================================
 *
 *       Filename:  ex48.c
 *
 *    Description:  Takes 10 numbers from the users and displays a histogram
 *
 *        Version:  1.0
 *        Created:  Sunday 08 April 2018 05:54:35  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aashish Patel (), aashish.a.patel@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int i = 1,j,n;
    printf ( "Please enter 10 numbers[1-50]\n" );
    do {
        n = 0;
        do {
            scanf ( "%d", &n );
        } while (i < 1 && i > 50); /* -----  end do-while  ----- */
        printf ( "|" );
        for ( j = 0; j <= n; j++ ) {
            printf ( "=" );
        }
        printf ( "\n" );
        i++;
    } while (i <=10);				/* -----  end do-while  ----- */
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

