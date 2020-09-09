/**************************************************************************/
/*                                                                        */
/* Programmer: Abdullah Mahmoud                                           */
/*                                                                        */
/* Program 19: Inner Product Recursive                                    */
/*                                                                        */
/**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int innerproduct( int *A, int *B, int n ) ;

int main( int argc, char *argv[] ) {

  int n, *A, *B, f, g, answer ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;
  
  fscanf( fin, "%d\n", &n ) ;

  A = ( int * ) malloc( n * sizeof( int ) ) ;
  B = ( int * ) malloc( n * sizeof( int ) ) ;

  for ( f = 0 ; f < n ; f++ ) { fscanf( fin, "%d\n", &A[f] ) ; }
  for ( g = 0 ; g < n ; g++ ) { fscanf( fin, "%d\n", &B[g] ) ; } 

  answer = innerproduct( A, B, n ) ;
    
  printf( "\nThe inner product of A and B is %d.\n", answer ) ;

  fclose( fin ) ;
  
  return 0;

}

int innerproduct( int *A, int *B, int n ) {
  
  if( n == 0 ) return 0 ;

  return  A[n - 1] * B[n - 1] + innerproduct ( A, B, n - 1 ) ;
    
}

  

