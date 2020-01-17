/************************************************************/
/*                                                          */
/* Programmer: Abdullah Mahmoud                             */
/*                                                          */
/* Program 22: Fun with Subtraction                         */
/*                                                          */
/* Time to Complete: 15 minutes                             */
/*                                                          */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getRects( int a, int b, int c, int d ) ;

int main( int argc, char *argv[] ) {

  int a, b, c, d ;
  
  a = atoi( argv[1] ) ;
  b = atoi( argv[2] ) ;
  c = atoi( argv[3] ) ;
  d = atoi( argv[4] ) ;
  
  getRects ( a, b, c, d ) ;

  return 0 ;  

}
 
void getRects( int a, int b, int c, int d ) {

  printf( "\n%d %d %d %d\n", a, b, c, d ) ;
  
  if ( a == b && b == c && c == d ) return ;
  
  getRects( abs(a - b), abs(b - c), abs(c - d), abs(a - d) ) ;

}
