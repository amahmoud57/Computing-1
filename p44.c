/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program: Recognizing a Palindrome using fgets  */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


bool Is_Palindrome( char *line, int len ) ;

int main( int argc, char *argv[] ) {

  char line[80] ;
  int len ;

  printf( "Please enter a string: " ) ;

  while ( fgets( line, 11, stdin ) != NULL ) {

    len = strlen( line ) ;

    if ( len > 0 && line[len-1] == '\n' ) {
      line[len-1] = '\0' ;
      len--;
    }

    if ( Is_Palindrome( line, len ) ) printf( "\nThe string: %s is a palindrome.", line ) ;

    else printf( "\nThe string: %s is not a palindrome.", line ) ;

    printf( "\n\nPlease enter another string: " ) ;

  }
  
  return 0 ;
  
}

bool Is_Palindrome( char *line, int len ) {

  char reverseStr[80] ;

  int i, j ;

  j = 0 ;

  for ( i = len - 1 ; i >=0 ; i-- ) {

    reverseStr[j++] = line[i] ;

  }

  reverseStr[i] = '\0' ;

  for( i = 0 ; i <= len - 1 ; i++ ) {

       if( reverseStr[i] != line[i] ) return false ;

  }

  return true ;
  
}
