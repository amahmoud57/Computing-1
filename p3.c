
/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 3: Using atoi                          */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

  int n, i ;
  
  n = atoi( argv[1] ) ;

  printf( "\n" ) ;
   
  for( i = 0 ; i < n ; i++ ) {

   printf("*") ;

  }
   
  printf( "\n\n" ) ;

  return 0 ;
  
}

