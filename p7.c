/*******************************************************/
/*                                                     */
/* Programmer: Abdullah Mahmoud                        */
/*                                                     */
/* Program 7: Factorial Recursive                      */
/*                                                     */
/* Time to Complete: 2 minutes                         */
/*                                                     */
/*******************************************************/

#include <stdio.h>

int factorial( int n ) ;

int n, fact ;

int main( int argc, char *argv[] ) {

  printf( "Please enter an integer: " ) ;
  scanf( "%d", &n ) ;

  fact = factorial( n ) ;

  printf( "\nThe factorial of %d is %d.\n", n, fact ) ;

  return 0 ;
  
}

int factorial( int n ) {

  if ( n == 0 ) return 1 ;

  return n * factorial( n - 1 ) ;
  
}





