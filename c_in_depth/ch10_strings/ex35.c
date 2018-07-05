/*
 * =====================================================================================
 *
 *       Filename:  ex35.c
 *
 *    Description:  Input a string and change it so that the alphabetical order.
 *                  Eg: Devanshi -> aDehinsv
 *
 *        Version:  1.0
 *        Created:  Thursday 05 July 2018 07:36:51  IST
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

char to_lower(char a);
int chr_cmp(char a, char b);

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
    char c, str[MAX];

    printf( "Enter string of alphabets (length < %d):", MAX );
    scanf( "%s", str );
    
    for ( i = 1; i < strlen(str); i++ ) {
        c = str[i];
        for ( j = i-1; j >= 0 && chr_cmp(str[j], c); j--) {
            str[j+1] = str[j];
        }
        str[j+1] = c;
    }

    printf( "Result: %s\n", str );

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  to_lower
 *  Description:  converts given char to lowercase
 * =====================================================================================
 */
char
to_lower ( char a )
{
    if ( a >= 'A' && a <= 'Z' ) {
        return a+32;
    } else {
        return a;
    }
}		/* -----  end of function to_lower  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  chr_cmp
 *  Description:  case insensitative comparision. Returns 1 if a is greater than b
 * =====================================================================================
 */
int
chr_cmp ( char a, char b )
{
    a = to_lower(a);
    b = to_lower(b);
    if ( a >= b ) {
        return 1;
    } else { 
        return 0;
    }
}		/* -----  end of function chr_cmp  ----- */
