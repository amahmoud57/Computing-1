/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 51: Appending to a Linked List         */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {

  int num ; 
  struct node *next ;

} NODE ;

void outputarray( NODE **bins, int *A, int *B, int i ) ;

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int n, i, j, *A, *output, position = 1, bin, count = 0 ;
  NODE **bins, *temp, *lastNode ;
  
  fin = fopen( argv[1], "r" ) ;
  fscanf( fin, "%d", &n ) ;

  A = ( int * ) malloc( sizeof( int ) * n ) ;
  output = ( int * ) malloc( sizeof( int ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) fscanf( fin, "%d ", &A[i] ) ;

  for ( position = 10 ; position <= 1000 ; position = position * 10 ) {
  
    bins = ( NODE ** ) malloc( sizeof( NODE * ) * 10 ) ;

    for( j = 0 ; j < 10 ; j++ ) {
      bins[j] = NULL ;

    }

    for( i = 0 ; i < 10 ; i++ ) {
      for( j = 0 ; j < n; j++ ) {
	if ( bins[i] != NULL ) {

	  lastNode -> next = temp ;

	}
    
	bin = A[j] % position ;

	temp = ( NODE * ) malloc( sizeof( NODE ) ) ;
      
	temp -> num = A[j] ;

	if ( bins[bin] == NULL ) {
	  bins[bin] = temp ;
	
	}
      
	lastNode = temp ;
	temp -> next = NULL ;
	output[count] = temp -> num ;
	count++ ;

      }
      
    }

    count = 0 ;
    
  }

  for( i = 0 ; i < n ; i++ ) {

    output[i] = A[i] ;
    printf( "%d\n", output[i] ) ;

  }
  
  fclose( fin ) ;
  
  return 0 ;
  
 }



  
