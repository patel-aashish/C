/*
 * =====================================================================================
 *
 *       Filename:  ex62_3.c
 *
 *    Description:  Print a pattern
 *                  
 *
 *        Version:  1.0
 *        Created:  Monday 23 April 2018 09:36:44  IST
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
    int i, j, w, h;
    char ch;
    do {
        printf ( "Enter odd n:" );
        scanf ( "%d", &w);
    } while ((w % 2 == 0));

    h = w;

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if ( j == i ) {
                ch = '\\';
            } else if (j == (w-i-1)) {
                ch = '/';
            } else {
                ch = '*';
            }
           printf ( "%c", ch ); 
        }
        printf ( "\n" );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
