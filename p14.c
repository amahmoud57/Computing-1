/*******************************************************************************/
/*                                                                             */
/* Programmer: Abdullah Mahmoud                                                */
/*                                                                             */
/* Program 14: Digit Sum Recursive                                             */
/*                                                                             */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int digitsum( int n ) ;

int main( int argc, char *argv[] ) {

  int n ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;

  while( fscanf( fin, "%d", &n ) != EOF )

    printf( "\nThe sum of the digits of %d is %d.\n\n", n, digitsum( n ) ) ;

  fclose( fin ) ;
  
  return 0 ;

}

int digitsum( int n ) {

  if ( n == 0 ) return 0 ;
  
  return ( n % 10 ) + digitsum( n / 10 ) ;

}
