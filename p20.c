/************************************************************/
/*                                                          */
/* Programmer: Abdullah Mahmoud                             */
/*                                                          */
/* Program 20: Bits of Fun Iterative                        */
/*                                                          */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

int bits( int n ) ;

int main( int argc, char *argv[] ) {

  int n, x ;

  n = atoi( argv[1] ) ;

  x = bits( n ) ;

  printf( "\nThe number of one bits in %d is %d.\n", n, x ) ;

  return 0 ;

}

int bits( int n ) {

  int i, count = 0 ;

  for( i = 1 ; i <= 32 ; i++ ) {

    if ( n < 0 ) {
    
      count++ ;

    }

    n = n << 1 ;

  }
 
  return count ;

}
