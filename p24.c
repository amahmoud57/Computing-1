/********************************************************************************/
/*                                                                              */
/* Programmer: Abdullah Mahmoud                                                 */
/*                                                                              */
/* Program 24: Left, Right, or Straight with Structs                            */
/*                                                                              */
/********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct point {

  int x, y;

} ;
  
int main( int argc, char *argv[] ) {

  int matrixmult ;

  struct point p1;
  struct point p2;
  struct point p3;

  p1.x = atoi( argv[1] ) ;
  p1.y = atoi( argv[2] ) ;  
  p2.x = atoi( argv[3] ) ;
  p2.y = atoi( argv[4] ) ;
  p3.x = atoi( argv[5] ) ; 
  p3.y = atoi( argv[6] ) ;

  matrixmult = ( ( ( p1.x * p2.y ) + ( p1.y * p3.x ) + ( p2.x * p3.y ) ) -
	         ( ( p3.x * p2.y ) + ( p1.x * p3.y ) + ( p2.x * p1.y ) ) ) ;

  if ( matrixmult > 0  ) {

    printf( "\nThe three points form a left turn.\n"     ) ;

  }
    
  if ( matrixmult == 0 ) {

    printf( "\nThe three points form a straight line.\n" ) ;

  }
    
  if ( matrixmult < 0  ) {

    printf( "\nThe three points form a right turn.\n"    ) ;

  }
    
  return 0 ;
  
}

