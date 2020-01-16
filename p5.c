/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 5: Nested For Loops                    */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

  int h, w, i, j ;
  
  h = atoi( argv[1] ) ;
  w = atoi( argv[2] ) ;
  
  printf( "\n" ) ;
  
  for( i = 0 ; i < h ; i++ ) {
     
    for( j = 0 ; j < w ; j++ ) {

      printf("*") ;
      
    }
  
    printf( "\n" ) ;
  
  }
   
  printf( "\n\n" ) ;

  return 0 ;
  
}

