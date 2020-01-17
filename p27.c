/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 27: Maxumum Subvector 3                */
/*                                                */
/* Time to Complete: 50 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
  
int maxOf2( int a, int b ) {

  if ( a >= b ) return a ;
  else return b ;
  
}

int maxOf3( int a, int b, int c ) {

  return maxOf2( ( maxOf2( a, b ) ), c ) ;

}
  
int maxCrossingSum( int *A, int L, int mid, int n ) { 

  int sum = 0, leftSum = INT_MIN, rightSum = INT_MIN, i ;
  
  for ( i = mid ; i >= L ; i-- ) {
    sum = sum + A[i] ;
    
    if ( sum > leftSum ) leftSum = sum ; 

  }

  sum = 0 ;
    
  for ( i = mid + 1; i <= n ; i++ ) {
    sum = sum + A[i] ;

    if ( sum > rightSum )
      rightSum = sum ;

  }
  
  return leftSum + rightSum ;

}
 
int maxSubArray3(int *A, int L, int n) { 

  int mid ;
  
  if ( L == n ) return A[L] ;
 
  mid = ( L + n ) / 2 ; 
  
  return maxOf3( maxSubArray3( A, L, mid ), maxSubArray3( A, mid + 1, n ), maxCrossingSum( A, L, mid, n ) ) ;

} 
  
int main( int argc, char *argv[] ) { 

  int *A, n, i ;
  FILE *fin ;
  
  n = atoi( argv[1] ) ;

  fin = fopen( argv[2], "r" ) ;
  
  A = ( int * ) malloc( sizeof( int ) * n ) ;

  for( i = 0 ; i < n ; i++ ) fscanf( fin, "%d", &A[i] ) ;
  
  printf("\n\nMaximum sum subvector is %d\n\n", maxSubArray3( A, 0, n - 1 ) ) ;

  free( A ) ;
  
  return 0 ;
  
} 

