/*
 * =====================================================================================
 *
 *       Filename:  ex61.c
 *
 *    Description:  Print below pattern
 *                  * * * * *
 *                   * * * * * 
 *                  * * * * *
 *        Version:  1.0
 *        Created:  Monday 23 April 2018 09:14:49  IST
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
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int i, j, n;
    char ch;
    do {
        printf ( "Enter number of lines required:\n" );
        scanf ("%d", &n); 
    } while (n < 1);
    
    for (i = 0; i < n; i++) {
        if ( i % 2 == 0) {
            ch = '*';
        } else {
            ch = ' ';
        }
        for (j = 0; j < 10; j++) {
            printf ( "%c", ch );
            if ( ch == '*') {
                ch = ' ';
            } else {
                ch = '*';
            }
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
