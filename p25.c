/***********************************************************/
/*                      	                           */
/* Programmer: Abdullah Mahmoud               	           */
/*                      	                           */
/* Program 25: Maxumum Subvector 1 	                   */
/*                      	                           */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int max( int a, int b ) {

  if ( a >= b ) return a ;
  if ( b >  a ) return b ;

}

int maxsum( int *A, int n ) {

  int maxsofar, Sum ;
  int L, U, I       ;
  maxsofar = 0      ;

  for ( L = 0 ; L < n ; L++ ) {

    for ( U = L ; U < n ; U++ ) {

      Sum = 0 ;

      for ( I = L ; I <= U ; I++ ) Sum = Sum + A[I] ;

      maxsofar = max( maxsofar, Sum ) ;
	
    }

  }

  return maxsofar ;
  
}

int main ( int argc, char *argv[] ) {

  int m, n, i, *A ;
  FILE *fin ;

  n = atoi( argv[1] ) ;
  
  fin = fopen( argv[2], "r" ) ;
    
  A = ( int * ) malloc( sizeof( int ) * n ) ;

  for( i = 0 ; i < n ; i++ ) {

    fscanf( fin, "%d", &A[i] ) ;

  }
    
  m = maxsum( A, n ) ;

  printf( "\nThe maximum sum is %d.\n\n ", m ) ;

  fclose( fin ) ;
  
  return 0 ;

}
