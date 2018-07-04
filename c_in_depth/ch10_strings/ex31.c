/*
 * =====================================================================================
 *
 *       Filename:  ex31.c
 *
 *    Description:  A function to convert string to uppercase
 *
 *        Version:  1.0
 *        Created:  Wednesday 04 July 2018 07:34:44  IST
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

void to_upper(char *s);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    char str[MAX];

    printf( "Enter string (length < %d):", MAX );
    gets(str);

    to_upper(str);

    printf( "Result: %s\n", str );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  to_upper
 *  Description:  Converts input string to upper case
 * =====================================================================================
 */
void
to_upper ( char *str )
{
    int i;
 
    for ( i = 0; str[i] ; i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] = str[i] - 32;
        }
    }
 
}		/* -----  end of function to_upper  ----- */
