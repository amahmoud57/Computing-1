/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program: Hadamard Matrix Fill V1               */
/*                                                */
/* Time to Complete: 3 minutes                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void fill( int **A, int n, int r, int c, int sign ) ;

int main( int argc, char *argv[] ) {

  int n, i, j, sign = 1 ;
  int **A ;

  n = atoi( argv[1] ) ;

  A = ( int ** ) malloc( sizeof( int * ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) A[i] = ( int * ) malloc( sizeof(int) * n ) ;

  fill( A, n, 0, 0, sign ) ;

  printf( "\n" ) ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = 0 ; j < n ; j++ ) printf( "%5d" , A[i][j] ) ;

    printf( "\n\n" ) ;

  }

  return 0 ;
  
}

void fill( int **A, int n, int r, int c, int sign ) {

  if ( n == 2 ) {

    A[r][c]        =  sign ;
    A[r+1][c]      =  sign ;
    A[r][c+1]      =  sign ;
    A[r+1][c+1]    = -sign ;

  }

  else {

    fill( A, n/2, r      , c      ,  sign ) ;
    fill( A, n/2, r      , c+n/2  ,  sign ) ;
    fill( A, n/2, r+n/2  , c      ,  sign ) ;
    fill( A, n/2, r+n/2  , c+n/2  , -sign ) ;

  }

}
