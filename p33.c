/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 33: Blank Removal                      */
/*                                                */
/* Time to Complete: 5 minutes                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#define isSpace( c ) ( c == 32 )

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int c, state = 1 ;
  
  fin = fopen( argv[1], "r" ) ;

  while( ( c = getc( fin ) ) != EOF ) {

    if ( state == 1 ) { 

      if ( !isSpace( c ) ) {

        printf( "%c", c ) ;

        continue ;

      }
      
      else {

        state = 2 ;

	printf( " " ) ;

      }

    }
      
    if ( ( state == 2 ) && !isSpace( c ) ) {

      state = 1 ;

      printf( "%c", c ) ;

    }

  }
    
  fclose( fin ) ;
  
  return 0 ;
  
}
