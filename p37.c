/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 37: Transpose                          */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void transpose( int **A ) ;

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int **A, i, j ;

  fin = fopen( argv[1], "r" ) ;

  A = ( int ** ) malloc( sizeof( int * ) * 5 ) ;

  for ( i = 0 ; i < 5 ; i++ ) {

    A[i] = ( int * ) malloc( sizeof( int * ) * 5 ) ;

  }
    
  printf( "Original array\n" ) ;

  for ( i = 0 ; i < 5 ; i++ ) {

    for ( j = 0; j < 5 ; j++ ) { 
    
      fscanf( fin, "%d", &A[i][j] ) ;

      printf( "%d ", A[i][j] ) ; 
    
    }

    printf( "\n" ) ;
    
  }

  transpose( A ) ;

  printf( "Transposed array\n" ) ; 

  for ( i = 0 ; i < 5 ; i++ ) {

    for ( j = 0; j < 5 ; j++ ) { 

      printf( "%d ", A[i][j] ) ; 

    }

    printf( "\n" ) ;

  }
  
  return 0 ;
  
}

void transpose( int **A ) {

  int swap, i, j ;

  for( i = 0; i < 5 ; i++ ) {
      
    for( j = 0 ; j < i ; j++ ) {

      swap = A[i][j] ;
	
      A[i][j] = A[j][i] ;
	
      A[j][i] = swap ;

      }

  }

  return ;
  
}
