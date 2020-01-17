/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 40: Hadamard Matrix Fill V2            */
/*                                                */
/* Time to Complete: 30 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#define index(row,col,n) ((row)*n+(col))

void fill( int *A, int n, int i, int j, int nOrig, int sign ) ;

int main( int argc, char *argv[] ) {

  int n, i, j, sign = 1 ;
  int *A ;

  n = atoi( argv[1] ) ;

  A = ( int * ) malloc( sizeof( int ) * n * n ) ;

  fill( A, n, 0, 0, n, sign ) ;

  printf( "\n" ) ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = 0 ; j < n ; j++ ) printf( "%5d" , A[ index(i,j,n) ] ) ;

    printf( "\n\n" ) ;

  }

  return 0 ;
  
}

void fill( int *A, int n, int i, int j, int nOrig, int sign ) {

  if ( n == 2 ) {

    A[ index(i,j, nOrig)     ] =  sign ;
    A[ index(i+1,j ,nOrig)   ] =  sign ;
    A[ index(i,j+1 ,nOrig)   ] =  sign ;
    A[ index(i+1,j+1,nOrig)  ] = -sign ;
    
  }

  else {

    fill( A, n/2, i      , j      , nOrig, sign ) ;
    fill( A, n/2, i      , j+n/2  , nOrig, sign ) ;
    fill( A, n/2, i+n/2  , j      , nOrig, sign ) ;
    fill( A, n/2, i+n/2  , j+n/2  , nOrig, -sign ) ;

  }

}
