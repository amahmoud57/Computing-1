/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 56: Jacobi's Method                    */
/*                                                */
/* Time to Complete: 3 hours                      */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define e .001

void freematrixspace( double **A, double **P, double **PT, double **Temp1, int n ) {

  int i ;
  
  for ( i = 0 ; i < n ; i++ ) {

    free( A[i] ) ;
    free( P[i] ) ;
    free( PT[i] ) ;
    free( Temp1[i] ) ;

  }

  free( A ) ; free( P ) ; free( PT ) ; free( Temp1 ) ;
  
  return ;
  
}

double **transpose( double **A, int n ) {

  int i, j ;
  double **AT ;

  AT = ( double ** ) malloc( sizeof( double * ) * n ) ;

  for ( i = 0 ; i < n ; i++ )
    AT[i] = ( double * ) malloc( sizeof( double ) * n ) ;

  for( i = 0; i < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {

      AT[j][i] = A[i][j] ;
      
    }

  }

  return AT ;

}

void findpqinuppertri( double **A, int n, int *p, int *q ) {

  int i, j, col = 1 ;
  double BigSoFar ;
  
  BigSoFar = A[0][1] ;
  *p = 0 ;
  *q = 1 ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = col ; j < n ; j++ ) {

      if ( A[i][j] > BigSoFar ) {

        BigSoFar = A[i][j] ;
        *p = i ;
        *q = j ;

      }

    }

    col++ ;

  }
  
  return ;
  
}

double squarerootsumsquares( double **A, int n ) {

  int i, j, col = 1 ;

  double sumsquares = 0.0 ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = col ; j < n ; j++ ) {

      sumsquares = sumsquares + ( A[i][j] * A[i][j] ) ;

    }

    col++ ;

  }

  return sqrt( sumsquares ) ;

}

double findtheta( double **A, int p, int q ) {

  double theta, twotheta ;

  if( A[p][p] == A[q][q] ) theta = ( M_PI / 4 ) ;
  
  twotheta = atan( ( 2 * A[p][q] ) / ( A[p][p] - A[q][q] ) ) ;
  theta = twotheta / 2 ;
  
  return theta ;
  
}

double **formthePmatrix( int n, int p, int q, double cosine, double sine ) {

  double **P ;
  int i, j ;

  P = ( double ** ) malloc( sizeof( double * ) * n ) ;

  for( i = 0 ; i < n; i++ )
    P[i] = ( double * ) malloc( sizeof( double ) * n ) ;

  for( i = 0 ; i < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {

      if( i == j ) P[i][j] = 1 ;
      else P[i][j] = 0 ;

    }
    
  }

  P[p][p] = cosine ;
  P[p][q] = sine ;
  P[q][p] = -1 * sine ;
  P[q][q] = cosine ;
  
  return P ;

}

double **matrixmultiply( double **A, double **B, int n ) {

  int i, j, k ;
  double sum = 0.0 ;
  double **C ;

  C = ( double ** ) malloc( sizeof( double * ) * n ) ;

  for ( i = 0 ; i < n ; i++ )
    C[i] = ( double * ) malloc( sizeof( double ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) {
    for ( j = 0 ; j < n ; j++ ) {
      for ( k = 0 ; k < n ; k++ ) {
	sum = sum + A[i][k] * B[k][j] ;

      }
      
      C[i][j] = sum ;

      sum = 0.0 ;

    }
    
  }
  
  return C ;
  
}

int main( int argc, char *argv[] ) {

  int count = 0, i, j, n, p, q ;
  double cosine, sine, theta ;
  double **A, **PT, **P, **Temp1, **Temp2 ;
  double srss ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;
  fscanf( fin, "%d", &n ) ;
  
  A = ( double ** ) malloc( sizeof( double * ) * n ) ;

  for ( i = 0 ; i < n ; i++ )
    A[i] = ( double * ) malloc( sizeof( double ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) {
    for ( j = 0 ; j < n ; j++ ) 

      fscanf( fin, "%lf", &A[i][j] ) ;
      
  }

  printf( "\nThe initial matrix: \n" ) ;

  for ( i = 0 ; i < n ; i++ ) {

    for ( j = 0 ; j < n ; j++ ) printf( "%16.7f", A[i][j] ) ;

    printf( "\n" ) ;

  }

  printf( "\n" ) ;
  printf( "\n" ) ;
  
  srss = squarerootsumsquares( A, n ) ;
  
  while ( srss > e ) {
  
    count++ ;

    findpqinuppertri( A, n, &p, &q ) ;
    
    theta = findtheta( A, p, q ) ;
  
    cosine = cos( theta ) ;
    sine   = sin( theta ) ; 

    P = formthePmatrix( n, p, q, cosine, sine ) ;
    
    PT = transpose( P, n ) ;
    
    Temp1 = matrixmultiply( A, P, n ) ;

    Temp2 = matrixmultiply( PT, Temp1, n ) ;

    freematrixspace( A, P, PT, Temp1, n ) ;

    A = Temp2 ;
    
    srss = squarerootsumsquares( A, n ) ;
    
  }
  
  printf( "\nThe final matrix .... \n " ) ;

  for( i = 0 ; i < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {    
      printf( "%16.7f", A[i][j] ) ;

    }

    printf( "\n" ) ;

  }
    
  printf( " \nThe count is %d.\n\n:", count ) ;

  fclose( fin ) ;

  return 0 ;
  
}

