/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 64: Pascal's Triangle                  */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void buildPascal( int p ) ;

int factorial( int num ) ;

int valueAtPos( int n, int r ) ;

int main( int argc, char *argv[] ) {
  
  int p, n, r ;
  
  p = atoi( argv[1] ) ;

  buildPascal( p ) ;

  printf( "\n" ) ;
  
  printf( "Input the n value: \n" ) ;
  scanf( "%d", &n ) ;

  printf( "Input the r value: \n" ) ;
  scanf( "%d", &r ) ;
  
  printf( "The value at the inputted position is %d\n", valueAtPos( n, r ) ) ;
        
  return 0 ;

}

void buildPascal( int p ) {

  int n, m, r ;
  
  for ( n = 0 ; n < p ; n++ ) {
      
    for ( m = 0 ; m <= ( p - n - 2 ) ; m++ )
      printf(" ") ;
      
    for( r = 0 ; r <= n ; r++ )
      printf("%d ", factorial( n ) / ( factorial( r ) * factorial( n - r ) ) ) ;
 
    printf("\n") ;
      
  }

  return ;

}

int factorial( int num ) {

  //  if ( num == 0 ) return 1 ;

  // return num * factorial( num - 1 ) ;

int c;
  long result = 1;
 
  for (c = 1; c <= num; c++)
    result = result*c;
 
  return result ;

  
}

int valueAtPos( int n, int r ) {

  if( r == 1 ) return 1 ;
  if( r == n ) return 1 ;
  
  return ( valueAtPos( n - 1, r - 1 ) + valueAtPos( n - 1, r ) ) ;

}
