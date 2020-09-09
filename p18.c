/*************************************************************************/
/*                                                                       */
/* Programmer: Abdullah Mahmoud                                          */
/*                                                                       */
/* Program 18: Inner Product Iterative                                   */
/*                                                                       */
/*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

  int n, *A, *B, x, i, f, g, sum ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;
  
  fscanf( fin, "%d\n", &n ) ;

  A = ( int * ) malloc( n * sizeof( int ) ) ;
  B = ( int * ) malloc( n * sizeof( int ) ) ;
  
  for ( f = 0 ; f < n ; f++ ) { fscanf( fin, "%d\n", &A[f] ) ; }
  for ( g = 0 ; g < n ; g++ ) { fscanf( fin, "%d\n", &B[g] ) ; } 
  
  for( i = 0; i < n ; i++)  {

    x = A[i] * B[i] ;
    sum = sum + x ;
    
  }	
  
  printf( "\nThe inner product of A and B is %d", sum ) ; 

  fclose ( fin ) ;
  
  return 0 ;

}
