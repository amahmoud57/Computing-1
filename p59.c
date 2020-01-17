/***********************************************************************/
/*                                                                     */
/* Programmer: Abdullah Mahmoud                                        */
/*                                                                     */
/* Program 59: Computing the Discrete Fourier Transform                */
/*                                                                     */
/* Time to Complete:                                                   */
/*                                                                     */
/***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
#include <math.h>

void buildFourierMatrix( COMPLEX **F, int n ) ;

void matrixvectormult( COMPLEX **F, COMPLEX *vector, int n ) ;

int main( int argc, char *argv[] ){

  int i,j, n, realField, imField ;
  COMPLEX **F, *vector ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;
  
  n = atoi( argv[2] ) ;

  F = ( COMPLEX ** ) malloc( sizeof( COMPLEX * ) * n ) ;
  
  for ( i = 0 ; i < n ; i++ ) F[i] = ( COMPLEX * ) malloc( sizeof( COMPLEX ) * n )  ;

  vector = ( COMPLEX * ) malloc( sizeof( COMPLEX ) * n ) ;

  i = 0 ;
  
  while ( fscanf( fin, "%d", &realField ) != EOF ) {
  
    fscanf( fin, "%d\n", &imField ) ;
    vector[i]. real = realField ;
    vector[i].im   = imField ;

    i++ ;
    
  }
  
  buildFourierMatrix( F, n ) ;
  
  matrixvectormult( F, vector, n ) ;
  
  fclose( fin ) ;
  
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

  return ;
  
}

void matrixvectormult( COMPLEX **F, COMPLEX *vector, int n ) {

  int i, j ;
  COMPLEX *fTransform, result;

  result.real = 0 ;
  result.im = 0 ;
  
  fTransform = ( COMPLEX * ) malloc( sizeof( COMPLEX ) * n ) ;
  
  printf( "Fourier Transform: \n\n" ) ;

  for( i = 0; i < n ; i++ ) {
      for ( j = 0 ; j < n ; j++ ) {

        result = Add_Complex( result, ( Multiply_Complex( F[i][j], vector[j] ) ) ) ;
	
      }

      fTransform[i] = result ;
      
      result.real = 0 ;
      result.im = 0 ;
      
  }
  
  for ( i = 0 ; i < n ; i++ ) {

      printf( "r : %.2lf ", fTransform[i].real ) ;
      printf( "im: %.2lf\n", fTransform[i].im ) ;

    }

  printf( "\n" ) ;

  return ;

}
