/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 2: Command Line Arguments              */
/*                                                */
/* Time to Complete: 5 minutes                    */
/*                                                */
/**************************************************/

#include <stdio.h>

int main( int argc, char *argv[] ) {

  int i ;

  for( i = argc - 1 ; i <= 0 ; i-- ) {

    printf( "Argument[%d]: %s\n", i, argv[i] ) ;

  }

  return 0 ;
  
}

