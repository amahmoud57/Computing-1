/*************************************************************************/
/*                                                                       */
/* Programmer: Abdullah Mahmoud                                          */
/*                                                                       */
/* Program 32: Greatest Common Divisor                                   */
/*                                                                       */
/* Time to Complete: 15 minutes                                          */
/*                                                                       */
/*************************************************************************/

#include <stdio.h>

int gcd ( int n1, int n2 ) ;

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int n1, n2 ;
  
  fin = fopen( argv[1], "r" ) ;
  
  while ( fscanf( fin, "%d", &n1 ) != EOF ) {
  
    fscanf( fin, "%d\n", &n2 ) ;
    
    printf( "The greatest common divisor of %d and %d is %d.\n", n1, n2, gcd( n1, n2 ) ) ;

  }

  fclose( fin ) ;
  
  return 0 ;
  
}

int gcd ( int n1, int n2 ) {

int smaller, i ;
  
  if ( n1 < n2 ) smaller = n1 ;
  if ( n2 < n1 ) smaller = n2 ;

  for ( i = smaller ; i > 0 ; i-- ) {

    if ( ( n1 % i == 0 ) && ( n2 % i == 0 ) ) break ;

  }

  return i ;
  
}
