/*******************************************************************************************/
/*                                                                                         */
/* Programmer: Abdullah Mahmoud                                                            */
/*                                                                                         */
/* Program 38: Greatest Common Divisor                                                     */
/*                                                                                         */
/*******************************************************************************************/

#include <stdio.h>

int gcd( int n1, int n2 ) ;

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int n1, n2 ;
  
  fin = fopen( argv[1], "r" ) ;

  while ( fscanf( fin, "%d", &n1 ) != EOF ) {

    fscanf( fin, "%d\n", &n2 ) ;
    
    printf( "The greatest common divisor of %d and %d is %d.\n", n1, n2, gcd ( n1, n2 ) ) ;
      
  }
  
  return 0 ;

}

int gcd( int n1, int n2 ) {

  int smaller, larger, i ;
  
  if ( n1 < n2 ) { smaller = n1 ; larger = n2 ; }

  else if ( n2 < n1 ) { smaller = n2 ; larger = n1 ; }

  else return n1 ;

  if ( larger % smaller == 0 ) return smaller ;

  else return gcd( smaller, larger % smaller ) ;
  
}

