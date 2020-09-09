/*********************************************************************/
/*                                                                   */
/* Programmer: Abdullah Mahmoud                                      */
/*                                                                   */
/* Program 21: Bits of Fun Recursive                                 */
/*                                                                   */
/*********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int bits( int n ) ;

int main( int argc, char *argv[] ) {

  int n, x, i = 1, count = 0 ;

  n = atoi( argv[1] ) ;

  printf( "\nThe number of one bits in %d is %d.\n", n, bits ( n ) ) ;

  return 0 ;

}

int bits( int n ) {

  int onebits = 0 ;
      
  if ( n == 0 ) return 0 ;

  if ( n < 0 ) onebits = 1 ;
  
  return onebits + bits( n << 1 ) ;  

}
 
