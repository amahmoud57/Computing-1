/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 54: Find the Angle                     */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

typedef struct point { int x ; int y ; float angle ; } POINT ;

void calcAngles( struct point *A, struct point lowerleft, int n ) ;

float getAngle( struct point p1, struct point p2 ) ;

void swap( struct point *A, int *smallest ) ;

struct point lowerLeft( int n, struct point *A, int *smallest ) ;

void sort( struct point *A, int n ) ;

int main( int argc, char *argv[] ) {

  int n, i, smallest ;
  struct point *A, lowerleft ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ; 
  n   = atoi( argv[2] ) ;

  A = ( struct point * ) malloc( sizeof( struct point ) * n ) ;

  for ( i = 0 ; i < n ; i++ )
    fscanf( fin, "%d %d\n", &A[i].x, &A[i].y ) ;

  lowerleft = lowerLeft( n, A, &smallest ) ;
  
  swap( A, &smallest ) ;
	  
  calcAngles( A, lowerleft, n ) ;

  sort( A, n ) ;
  
  fclose( fin ) ;
  
  return 0 ;
  
}

struct point lowerLeft( int n, struct point *A, int *smallest ) {

  int i ;

  *smallest = A[0].y ;

  for ( i = 0 ; i < n ; i++ ) {

    if( A[i].y < A[*smallest].y )
      *smallest = i ;

    if( A[i].y == A[*smallest].y ) {
      if( A[i].x < A[*smallest].x)
        *smallest = i ;

    }
    
  }

  return A[*smallest] ;

}

void swap( struct point *A, int *smallest ) {

  struct point temp ;

  temp = A[0] ;
  A[0] = A[*smallest] ;
  A[*smallest] = temp ;
  
  return ;

}

float getAngle( struct point p1, struct point p2 ) {

  float slope, angle ;
  
  slope = (float)( p2.y - p1.y ) / (float)( p2.x - p1.x ) ; 
  
  angle = atan( slope ) * ( 180 / M_PI );
  
  return angle ;
  
}

void calcAngles( struct point *A, struct point lowerleft, int n ) {

  int i ;
  
  for( i = 0 ; i < n ; i++ ) {

    if( A[i].x != lowerleft.x && A[i].y != lowerleft.y ) {
      if( A[i].x != lowerleft.x )
      A[i].angle = getAngle( A[i], lowerleft ) ;

    }
      
  }
  
  return ;

}

void sort( struct point *A, int n ) {

  int i, j;
  struct point temp ;

  for ( i = 1; i < n ; i++ ) {

    for ( j = 1 ; j < n - 1 ; j++ ) {

      if ( A[j].angle > A [ j + 1 ].angle ) {

           temp = A[j] ;
           A[j] = A[j+1] ;
           A[j+1] = temp ;

      }
    }
  }

  printf( "Sorted points by angle: \n" ) ;
  
  for( i = 0 ; i < n ; i++ ) {

    printf( "%d %d\n", A[i].x, A[i].y ) ;

  }

}

