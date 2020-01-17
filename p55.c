/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 55: Walsh Transform                    */
/*                                                */
/* Time to Complete: 20 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void hfill( int **matrix, int n, int r, int c, int sign ) ;

void matrixmult( int **matrix, int *vector, int n ) ;

void divideByN( float *vectorprime, int n ) ;

int main( int argc, char *argv[] ) {

  int i, n, **matrix, *vector, sign = 1 ;
  FILE *fin ;
  
  n = atoi( argv[1] ) ;

  fin = fopen( argv[2], "r" ) ;

  matrix = ( int ** ) malloc( sizeof( int * ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) matrix[i] = ( int * ) malloc( sizeof(int) * n ) ;
  
  hfill( matrix, n, 0, 0, sign ) ;
  
  vector = ( int * ) malloc( sizeof( int ) * n ) ;

  for ( i = 0 ; i < n ; i++ )
    fscanf( fin, "%d", &vector[i] ) ;
  
  matrixmult( matrix, vector, n ) ;
  
  fclose( fin ) ;
  
  return 0 ;
  
}

void hfill( int **matrix, int n, int r, int c, int sign ) {
    
  if ( n == 2 ) {

    matrix[r][c]        =  sign ;
    matrix[r+1][c]      =  sign ;
    matrix[r][c+1]      =  sign ;
    matrix[r+1][c+1]    = -sign ;

  }

  else {

    hfill( matrix, n/2, r      , c      ,  sign ) ;
    hfill( matrix, n/2, r      , c+n/2  ,  sign ) ;
    hfill( matrix, n/2, r+n/2  , c      ,  sign ) ;
    hfill( matrix, n/2, r+n/2  , c+n/2  , -sign ) ;

  }

  return ;
  
}

void matrixmult( int **matrix, int *vector, int n ) {

  int i, j, sum = 0 ;
  float *vectorprime ;

  vectorprime = ( float * ) malloc( sizeof( float ) * n ) ;

  for( i = 0; i < n ; i++ ) {
      for ( j = 0 ; j < n ; j++ ) {

        sum = sum + ( matrix[i][j] * vector[j] ) ;

      }

      vectorprime[i] = sum ;

      sum = 0 ;

  }

  divideByN( vectorprime, n ) ;
  
  return ;

}

void divideByN( float *vectorprime, int n ) {

  int i ;

  printf( "Walsh Transform Vector : \n\n") ; 
  
  for ( i = 0 ; i < n ; i++ ) {

    vectorprime[i] = vectorprime[i] / 4 ;

    printf( "%.2lf\n", vectorprime[i] ) ;

  }

  printf( "\n" ) ;
  
  return ;

}
