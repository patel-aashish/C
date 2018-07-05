/*
 * =====================================================================================
 *
 *       Filename:  ex36.c
 *
 *    Description:  A program to abbreviate input text.
 *                  Eg: "World Health Organization" -> WHO
 *
 *        Version:  1.0
 *        Created:  Thursday 05 July 2018 07:53:51  IST
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
    int i;
    char str[MAX];

    printf( "Enter string (length < %d):", MAX );
    gets(str);

    printf ( "Abbreviation: " );
    for ( i = 0; i < strlen(str); i++ ) {
        if ( str[i] >= 'A' && str[i] <= 'Z' ) {
            printf ( "%c", str[i] );
        }
    }
    printf ( "\n" );
 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
