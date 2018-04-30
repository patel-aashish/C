/*
 * =====================================================================================
 *
 *       Filename:  ex14.c
 *
 *    Description:  Write a recursive function to enter a line of text and display it
 *                  in reversve order without using a array to store it.
 *
 *        Version:  1.0
 *        Created:  Saturday 28 April 2018 10:16:47  IST
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

void getPrintLine(void);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int 
main ( int argc, char *argv[] )
{
    printf ( "Enter a line:\n" );
    getPrintLine();
    printf ( "\n" );

    return EXIT_SUCCESS;
} /* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  getPrintLine
 *  Description:  takes a character as input and prints it
 * =====================================================================================
 */
void
getPrintLine ( void )
{
  char ch;
  scanf ( "%c", &ch );
  if (ch == '\n') {
      return;
  }
  getPrintLine();
  printf( "%c", ch);
} /* -----  end of function getline  ----- */
