/*
 * =====================================================================================
 *
 *       Filename:  ex32.c
 *
 *    Description:  A program to perform case insensitive string compare
 *
 *        Version:  1.0
 *        Created:  Wednesday 04 July 2018 07:52:34  IST
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

void to_upper(char *str);
int str_cmp(char *str1, char *str2);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    int ret;
    char str1[MAX], str2[MAX];

    printf( "Enter string 1(length < %d):", MAX );
    gets(str1);
    printf( "Enter string 2(length < %d):", MAX );
    gets(str2);

    ret = str_cmp(str1, str2);
    if ( ret == 0 ) {
        printf ( "Strings are same\n" );
    } else if ( ret > 0 ) {
        printf ( "String1 is greater than String2\n" );
    } else {
        printf ( "String2 is greater than String1\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  to_upper
 *  Description:  Converts input string to uppercase 
 * =====================================================================================
 */
void
to_upper ( char *str )
{
    int i;

    for ( i = 0; str[i]; i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] = str[i] - 32;
        }
    }
}		/* -----  end of function to_upper  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  str_cmp
 *  Description:  Case insensitive string comparision
 * =====================================================================================
 */
int
str_cmp ( char *str1, char *str2 )
{
    to_upper(str1);
    to_upper(str2);
    return strcmp(str1, str2);
}		/* -----  end of function str_cmp  ----- */
