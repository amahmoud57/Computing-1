/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 48: Tromino Tiling                     */
/*                                                */
/* Time to Complete: 3 hours                      */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int count = 0 ;

void tromino( int **A, int n, int r, int c ) ;

int main( int argc, char *argv[] ) {

  int n, i, j, sign = 1 ;
  int **A ;

  n = atoi( argv[1] ) ;
  r = atoi( argv[2] ) ;
  c = atoi( argv[3] ) ;
		     
  A = ( int ** ) malloc( sizeof( int * ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) A[i] = ( int * ) malloc( sizeof(int) * n ) ;

  fill( A, n, r, c ) ;

  printf( "\n" ) ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = 0 ; j < n ; j++ ) printf( "%5d" , A[i][j] ) ;

    printf( "\n\n" ) ;

  }

  return 0 ;
  
}

void tromino( int **A, int n, int r, int c ) {

  int nextAscii ;
  
  if ( count == 0 ) {

    A[r][c] =  " " ;

  }

  count++ ;

  upperLeft ( A, n/2, r, c ) ;
  upperRight( A, n/2, r, c ) ;
  lowerLeft ( A, n/2, r, c ) ;
  lowerRight( A, n/2, r, c ) ;

}

void upperLeft
