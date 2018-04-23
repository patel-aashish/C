/*
 * =====================================================================================
 *
 *       Filename:  ex62_2.c
 *
 *    Description:  Print below pattern
 *                  ********
 *                  *      *
 *                  ********
 *                  Take height and width as input
 *        Version:  1.0
 *        Created:  Monday 23 April 2018 09:27:16  IST
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
        printf ( "Enter width and height(wxh):\n" );
        scanf ("%dx%d", &w, &h);
    } while ( w <= 0 || h <= 0);

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (i == 0 || i == (h-1) || j == 0 || j == (w-1)) {
                // Edges 
                ch = '*';
            } else {
                ch = ' ';
            }
            printf ( "%c", ch );
        }
        printf ( "\n" );
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
