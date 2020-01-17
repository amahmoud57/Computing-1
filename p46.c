/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 46: Radix Sort                         */
/*                                                */
/* Time to Complete: 3 hours                      */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct node { int num ; struct node *next ; } NODE ;

float getBin(int num, int pos) ;

void printResult( int *A, int n ) ;

void addToEndOfList( NODE *list, NODE *node ) ;

void freeBinMemory( NODE *list ) ;

int main( int argc, char *argv[] ) {

  FILE *fin ;
  int n, i, j, *A, position = 1, bin, count = 0 ;
  NODE **bins, *temp, *list ;
  
  fin = fopen( argv[1], "r" ) ;
  fscanf( fin, "%d", &n ) ;
  
  A = ( int * ) malloc( sizeof( int ) * n ) ;

  for ( i = 0 ; i < n ; i++ ) fscanf( fin, "%d ", &A[i] ) ;
  
  for ( position = 10 ; position <= 10000 ; position *= 10 ) {
  
    bins = ( NODE ** ) malloc( sizeof( NODE * ) * 10 ) ;

    for( j = 0 ; j < 10 ; j++ ) {

      freeBinMemory( bins[j] ) ;
      bins[j] = NULL ;

    }
      
    for( j = 0 ; j < n; j++ ) {
	
      bin = getBin( A[j], position ) ;

      temp = ( NODE * ) malloc( sizeof( NODE ) ) ;

      temp -> num = A[j] ;
      temp -> next = NULL ;
      
      if ( bins[bin] == NULL ) {

	bins[bin] = temp ;

      }
	
      else {

	addToEndOfList( bins[bin], temp ) ;
	
      }
      
    }

    count = 0 ;
    
    for( i = 0 ; i < 10 ; i++ ) {

      list = bins[i] ;
      
      while( list != NULL ) {

	A[count] =  list -> num ;
	list = list -> next ;
	count++ ;
	
      }
      
    }
				  
  }

  printResult( A, n ) ;
  
  fclose( fin ) ;
  
  return 0 ;
  
 }

float getBin( int num, int pos ) {

  float bin;

  bin = num % pos ;

  if ( pos > 10 )
    bin = bin / ( pos / 10 ) ;

  return bin ;

}

void printResult( int *A, int n ) {
 
  printf( "\nThe smallest number is : %d\n", A[0] ) ;
  printf( "\nThe largest  number is : %d\n", A[n-1] ) ;
  printf( "\nThe median number is : %d\n"  , A[(n-1)/2] ) ; 
 
  return ;

}

void addToEndOfList( NODE *list, NODE *node ) {

  while ( list -> next != NULL ) {

    list = list -> next ;

  }

  list -> next = node ;
 
}
  
void freeBinMemory( NODE *list ) {

  NODE *temp ;

  if( list == NULL ) return ;
  
  while ( list -> next != NULL ) {

   temp = list -> next ;
   free( list ) ;
   list = temp ;

  }

  return ;
  
}
