/***************************************************/
/*                                                 */
/* Programmer: Abdullah Mahmoud                    */
/*                                                 */
/* Program 47: Close Enough for Practical Purposes */
/*                                                 */
/* Time to Complete: 15 minutes                    */
/*                                                 */
/***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>      

double sqRoot( int a, double accuracy, double x ) ;

int main( int argc, char *argv[] ) {

  int a;
  double accuracy ;

  a = atoi( argv[1] ) ;
  accuracy = atof( argv[2] ) ;
  
  printf( "The square root of %d is %lf\n", a, sqRoot( a, accuracy, 1 ) ) ;

  return 0 ;
  
}

double sqRoot( int a, double accuracy, double x ) {

  do {

  x = (0.5) * ( x + a / x ) ;
  
  }

  while ( fabs( pow( x , 2 ) - a ) > accuracy ) ;

  return x ;

}


