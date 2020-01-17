/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 42: Empty Box                          */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/
#include <stdio.h>
#include <stdlib.h>

void drawline( char c, int w ) {

  int i ;
  
  for ( i = 1 ; i <= w ; i++ ) {

    printf( "%c", c ) ;

  }

}

int main( int argc, char *argv[] ) {

  int w, h, i ;

  w = atoi( argv[1] ) ;
  h = atoi( argv[2] ) ;

  drawline ( '*', w ) ;

  printf( "\n" ) ;
  
    for ( i = 1 ; i < h - 1 ; i++ ) {

      printf( "*" ) ;

      drawline ( ' ', w - 2 ) ;
  
      printf( "*" ) ;

      printf( "\n" ) ;
      
    }  
    
  drawline ( '*', w ) ;

  printf( "\n" ) ;
  
  return 0 ;
  
}

