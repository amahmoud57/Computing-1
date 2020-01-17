/****************************************************************************/
/*                                                                          */
/* Programmer: Abdullah Mahmoud                                             */
/*                                                                          */
/* Program 10: Fibonacci Analytical                                         */
/*                                                                          */
/* Time to Complete: 10 minutes                                             */
/*                                                                          */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nthNumber( double a, double b, double c, int n ) ;

int main( int argc, char *argv[] ) {

  int n ;
  
  double a, b, c ;
  
  n = atoi( argv[1] ) ;
  
  a = 1 / sqrt( 5 ) ;
  b = pow( (( 1 + sqrt( 5 ) ) / 2 ) , n ) ;
  c = pow( (( 1 - sqrt( 5 ) ) / 2 ) , n ) ; 

  printf( "\nThe %dth number in the Fibonnaci Sequence is %d\n", n, nthNumber( a, b, c, n ) ) ;

  return 0 ;
  
}

int nthNumber( double a, double b, double c, int n ) {

  int f ;
  
  if      ( n == 1 ) { f = 1 ; }  
  else if ( n == 2 ) { f = 1 ; }
  else if ( n == 3 ) { f = 2 ; }
  else if ( n == 4 ) { f = 3 ; }

  else f =  a * ( b - c ) ;
 
  return f ;
    
}
