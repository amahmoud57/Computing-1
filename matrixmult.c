/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program: Matrix Multiplication                 */
/*                                                */
/* Time to Complete: 5 minutes                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int **matrix_multiply( int **A, int ar, int ac, int **B, int br, int bc ) ;

int main( int argc, char *argv[] ) {

  int **A, **B, **C ;
  int i, j, r, p, c ;

  r = atoi( argv[1] ) ;
  p = atoi( argv[2] ) ;
  c = atoi( argv[3] ) ;

  A = ( int ** ) malloc( sizeof( int * ) * r ) ;
  B = ( int ** ) malloc( sizeof( int * ) * p ) ;

  for ( i = 0 ; i < r ; i++ ) A[i] = ( int * ) malloc( sizeof( int ) * p ) ;
  for ( i = 0 ; i < p ; i++ ) B[i] = ( int * ) malloc( sizeof( int ) * c ) ;

  for( i = 0 ; i < r ; i++ ) for ( j = 0 ; j < p ; j++ ) A[i][j] = 1 ;
  for( i = 0 ; i < p ; i++ ) for ( j = 0 ; j < c ; j++ ) B[i][j] = 1 ;

  C = matrix_multiply( A, r, p, B, p, c ) ;

  /*

  printf( "\n" ) ;

  for ( i = 0 ; i < r ; i++ ) {

    for( j = 0 ; j < c ; j++ ) printf( "%5d", C[i][j] ) ;
    printf( "\n" ) ;

  }

  */
  
  return 0 ;
  
}

int **matrix_multiply( int **A, int ar, int ac, int **B, int br, int bc ) {

  int i, j, k, **C ;

  C = ( int ** ) malloc( sizeof( int * ) * ar ) ;
  for( j = 0 ; j < ar ; j++ ) C[j] = ( int * ) malloc( sizeof( int ) * bc ) ;

  for ( i = 0 ; i < ar ; i++ )

    for ( j = 0 ; j < bc ; j++ ) {

      C[i][j] = 0 ;

      for ( k = 0 ; k < ac ; k++ )

	C[i][j] = C[i][j] + A[i][k] * B[k][j] ;

    }

  return C ;

}





