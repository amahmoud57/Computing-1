/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 52: Mind your Ps and Qs                */
/*                                                */
/* Time to Complete: 10 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int largestUpper( int **A, int *p, int *q ) ;

int main( int argc, char *argv[] ) {

  int **A, i, p, q ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;

  A = ( int ** ) malloc( sizeof( int * ) * 8 ) ;

  for ( i = 0 ; i < 8 ; i++ ) 

    A[i] = ( int * ) malloc( sizeof( int * ) * 8 ) ;

  for ( p = 0 ; p < 8 ; p++ )

    for ( q = 0 ; q < 8 ; q++ )

      fscanf( fin, "%d", &A[p][q] ) ;
  
  printf( " The largest value in the upper triangle is %d\n", largestUpper ( A, &p, &q ) ) ;

  printf( " It is located in row %d, column %d\n", p, q ) ;
  
  fclose( fin ) ;
  
  return 0 ;
  
}

int largestUpper( int **A, int *p, int *q ) {

  int i, j, maxsofar = 0, count = 1 ;
  
  for ( i = 0 ; i < 8 ; i++ ) {
  
    for ( j = count ; j < 8 ; j++ ) {

      if ( A[i][j] > maxsofar ) {

	maxsofar = A[i][j] ;
        *p = i ;
	*q = j ;
	
      }

    }
      
      count++ ;
      
  }
  
  return maxsofar ;
  
}
