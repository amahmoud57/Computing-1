/******************************************************/
/*                                                    */
/* Programmer: Abdullah Mahmoud                       */
/*                                                    */
/* Program 8: Fibonacci Iterative                     */
/*                                                    */
/* Time to Complete: 10 minutes                       */
/*                                                    */
/******************************************************/

#include <stdio.h>
#include <stdlib.h>

int fibi( int n ) ;

int main( int argc, char *argv[] ) {

  int n ;
  
  n = atoi( argv[1] ) ;

  printf( "\nThe %dth number is %d\n", n, fibi( n ) ) ;

  return 0 ;

  
}

int fibi( int n ) {

  int i, fib, num1 = 1, num2 = 1 ; 
  
  for ( i = 1 ; i <= ( n - 2 ) ; i++ ) {

    fib  = num1 + num2 ;
    
    num1 = num2 ;
      
    num2 = fib ;   

  }
  
  return fib ;

}

  
