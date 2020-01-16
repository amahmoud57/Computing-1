/******************************************************/
/*                                                    */
/* Programmer: Abdullah Mahmoud                       */
/*                                                    */
/* Program 6: Factorial Iterative                     */
/*                                                    */
/* Time to Complete: 5 minutes                        */
/*                                                    */
/******************************************************/

int factorial( int n ) ;

#include <stdio.h>

int n, fact ;

int main( int argc, char *argv[] ) {

  printf( "Please enter an integer: " ) ;
  scanf( "%d", &n ) ;

  fact = factorial( n ) ;

  printf( "\nThe factorial of %d is %d.\n", n, fact ) ;

  return 0 ;
  
}

int factorial( int n ) {

  int i, fact = 1 ;
  
  for ( i = 1 ; i <= n ; i++ ) fact = fact * i ; 

  return fact ;
  
}





