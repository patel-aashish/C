/*
 * =====================================================================================
 *
 *       Filename:  ex38.c
 *
 *    Description:  A program to remove adjacent multiple spaces with a single space
 *
 *        Version:  1.0
 *        Created:  Thursday 05 July 2018 08:11:16  IST
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
#include    <string.h>

#define     MAX       79  /* Max size */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int i, j;
    char str[MAX];

    printf( "Enter string (length < %d):", MAX );
    gets(str);

    for ( i = 0; str[i+1]; i++ ) {
        if ( str[i] == ' ' && str[i+1] == ' ' ) {
            for ( j = i+1; str[j]; j++ ) {
                str[j] = str[j+1];
            }
            i--;
        } 
    }

    printf( "Result:\n%s\n", str );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
