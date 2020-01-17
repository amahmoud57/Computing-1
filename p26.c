/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 26: Maxumum Subvector 6                */
/*                                                */
/* Time to Complete: 10 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int max( int a, int b ) {

  if ( a >= b ) return a ;
  if ( b >  a ) return b ;

}

int maxsum2a( int *A, int n ) {

  int maxsofar, Sum ;
  int L, U          ;

  maxsofar = 0      ;

  for ( L = 0 ; L < n ; L++ ) {

    Sum = 0 ;
    
    for ( U = L ; U < n ; U++ ) {

      Sum = Sum + A[U] ;

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
    
  m = maxsum2a( A, n ) ;

  printf( "\nThe maximum sum is %d.\n\n ", m ) ;

  fclose( fin ) ;
  
  return 0 ;

}
