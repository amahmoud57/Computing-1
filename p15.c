/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 15: Persistence Iterative              */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int pnumber( int n ) ;

int main( int argc, char *argv[] ) {

  int n, persistencenumber ;
  
  printf( " Please enter a number: " ) ;

  while( scanf( "%d", &n ) == 1 ) {

  persistencenumber = pnumber( n ) ;

  printf( "\nThe persistence number of %d is %d.\n\n", n, persistencenumber ) ;

  printf( " Please enter a number: " ) ;
  
  }
  
  return 0 ;

}

int pnumber( int n ) {

  int x, product = 1, i, count = 0 ;

  /*  do  {
  
    for( i = 0 ; n > 0 ; i++) {

      x = n % 10 * product ;

      n = n / 10 ;

      product = x ;

    }

    if ( i > 1 ) counter++ ;
  
    n = product ;

    product = 1 ;
  
  } while ( i > 1 ) ;
  
  return counter ;
  
  */

  if( ( n / 2 ) == 0 ) return 0 ;

  while( (n/2) != 0 ) {

    product = product * ( n % 10 ) ;
    count++ ;
    n = n / 10 ;

  }

  

}
