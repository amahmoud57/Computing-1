/***************************************************************/
/*                                                             */
/* Programmer: Abdullah Mahmoud                                */
/*                                                             */
/* Program 23: Left, Right, or Straight w/o Structs            */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

  int x1, x2, x3, y1, y2, y3, matrixmult ;

  x1 = atoi( argv[1] ) ;
  y1 = atoi( argv[2] ) ;
  x2 = atoi( argv[3] ) ; 
  x2 = atoi( argv[4] ) ;
  x3 = atoi( argv[5] ) ; 
  x3 = atoi( argv[6] ) ;

  matrixmult = ( ( ( x1 * y2 ) + ( y1 * x3 ) + ( x2 * y3 ) ) -
	         ( ( x3 * y2 ) + ( x1 * y3 ) + ( x2 * y1 ) ) ) ;

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

