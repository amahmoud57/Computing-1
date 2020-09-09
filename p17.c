/*********************************************************/
/*                                                       */
/* Programmer: Abdullah Mahmoud                          */
/*                                                       */
/* Program: Simple Encryption                            */
/*                                                       */
/*********************************************************/

#include <stdio.h>
#include <ctype.h>

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int l ;
  
  fin = fopen( argv[1] , "r" ) ;

  while( ( l = getc( fin )) != EOF ) {

    if ( ! isalpha( l )) { putchar( l ) ; continue ; }

    l = tolower( l ) ;

    l = l + 13 ;

    if ( l >= 123 ) l = 'a' + ( l - 123 ) ;

      putchar ( l ) ; 

  }

  fclose( fin ) ;
  
  return 0 ;
  
}

