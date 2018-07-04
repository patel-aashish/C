/*
 * =====================================================================================
 *
 *       Filename:  ex34.c
 *
 *    Description:  A program to remove all leading and trailing spaces from a string
 *
 *        Version:  1.0
 *        Created:  Wednesday 04 July 2018 08:10:20  IST
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

void remove_space(char *str);

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

    remove_space(str);

    printf( "Result:\n%s\n", str );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  remove_space
 *  Description:  Removes trailing and leading spaces from a string
 * =====================================================================================
 */
void
remove_space ( char *str )
{
    int i = 0, j;
    while ( str[0] == ' ' ) {
        for ( i = 0; str[i]; i++) {
            str[i] = str[i+1];
        }
    }
    
    for ( i = strlen(str) - 1 ; str[i] != ' '; i-- ) {
        str[i] = '\0';
    }
}		/* -----  end of function remove_space  ----- */
