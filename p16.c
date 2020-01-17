/***************************************************************/
/*                                                             */
/* Programmer: Abdullah Mahmoud                                */
/*                                                             */
/* Program 16: Bubble Sort                                     */
/*                                                             */
/* Time to Complete: 15 minutes                                */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

void printlist ( int A[], int n ) {

  int i ;
  
  for ( i = 0; i <= 9 ; i++ ) printf( "%d ", A[i] ) ;
    
}

void bubblesort( int A[], int n ) {
    
  int i, j, temp ;
  
  for ( i = 0; i <= 9 ; i++ ) { 
  
    for ( j = 0 ; j <= 9 ; j++ ) {

      if ( A[j] > A [ j + 1 ] ) {  

	   temp = A[j] ;
	   A[j] = A[j+1] ;
	   A[j+1] = temp ;

      }	 	 
    }
  }
}

int main( int argc, char *argv[] ) {
  
  int i, *A ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ;
 
  A = ( int * ) malloc( 10 * sizeof( int ) ) ; 
	 
  for ( i = 0; i <= 9 ; i++ ) { fscanf( fin, "%d\n", &A[i] ) ; } ;

  bubblesort( A, 10 ) ;

  printlist( A, 10 ) ;
  
  printf( "\n" ) ;
  
  fclose( fin ) ;
  
  return 0 ;

}
  

