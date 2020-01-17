/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 53: Matrix Times a Vector              */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void matrixmult( int **matrix, int *vector, int n ) ;

int main( int argc, char *argv[] ) {

  int n, **matrix, *vector, i, j ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;

  fscanf( fin, "%d", &n ) ;
  
  matrix = ( int ** ) malloc( sizeof( int * ) * n ) ;

  for( i = 0 ; i < n ; i++ )

    matrix[i] = ( int * ) malloc( sizeof( int ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {
    
      fscanf( fin, "%d", &matrix[i][j] ) ;
      
    }

  }
  
  vector = ( int * ) malloc( sizeof( int ) * n ) ;

  for( i = 0 ; i < n ; i++ ) {
    
    fscanf( fin, "%d", &vector[i] ) ;
      
  }

  matrixmult( matrix, vector, n ) ;
  
  fclose( fin ) ;
			     
  return 0 ;
  
}

void matrixmult( int **matrix, int *vector, int n ) {

  int i, j, k, sum = 0, *vectorprime ;
  
  vectorprime = ( int * ) malloc( sizeof( int ) * n ) ;

  printf( "Vector Prime: \n" ) ;
  
  for( i = 0; i < n ; i++ ) { 
      for ( j = 0 ; j < n ; j++ ) {

	sum = sum + ( matrix[i][j] * vector[j] ) ;
	
      }

      vectorprime[i] = sum ;

      sum = 0 ;
      
      printf( "%d\n", vectorprime[i] ) ;

  }

  return ;
  
}
