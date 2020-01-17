/***********************************************************************/
/*                                                                     */
/* Programmer: Abdullah Mahmoud                                        */
/*                                                                     */
/* Program 58: Computing the Fourier Matrix                            */
/*                                                                     */
/* Time to Complete:                                                   */
/*                                                                     */
/***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
#include <math.h>

void buildFourierMatrix( COMPLEX **F, int n ) ;

int main( int argc, char *argv[] ){

  int i, n ;
  COMPLEX **F ;
  
  n = atoi( argv[1] ) ;
  
  F = ( COMPLEX ** ) malloc( sizeof( COMPLEX * ) * n ) ;
  
  for ( i = 0 ; i < n ; i++ ) F[i] = ( COMPLEX * ) malloc( sizeof( COMPLEX ) * n )  ;
  
  buildFourierMatrix( F, n ) ;
  
  return 0 ;

}

void buildFourierMatrix( COMPLEX **F, int n ) {

  int i, j ;

  for ( i = 0 ; i < n ; i++ ) {
    for( j = 1 ; j < n ; j++ ) {

      F[i][j].real = cos( 2 * M_PI / n * i * j ) ;
      F[i][j].im   = sin( 2 * M_PI / n * i * j ) ;

    }

  }

  for ( i = 0 ; i < n ; i++ ) {
    for ( j = 0 ; j < n ; j++ ) {

      printf( "r : %.2lf\t", F[i][j].real ) ;

    }

    printf( "\n" ) ;

    for ( j = 0 ; j < n ; j++ ) {
      
      printf( "im: %.2lf\t", F[i][j].im ) ;

    }

    printf( "\n\n" ) ;
    
  }

  return ;
  
}
