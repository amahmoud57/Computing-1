/******************************************************/
/*                                                    */
/* Programmer: Abdullah Mahmoud                       */
/*                                                    */
/* Program 9: Fibonacci Recursive                     */
/*                                                    */
/* Time to Complete: 4 minutes                        */
/*                                                    */
/******************************************************/

#include <stdio.h>
#include <stdlib.h>

int fibi( int n ) ;

int main( int argc, char *argv[] ) {

  int n ;
  
  n = atoi( argv[1] ) ;

  printf( "\nThe %dth number is %d\n", n, fibi ( n ) ) ;

  return 0 ;
  
}

int fibi( int n ) {

  int fib ;

  if ( n == 1 ) return 1 ;
  if ( n == 2 ) return 1 ; 
  
  fib = fibi ( n - 1 ) + fibi ( n - 2 ) ;

  return fib ;

}

  
