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

  int n ; 
  struct node *next ;

} NODE ;

void printlist( NODE *L ) ;
  
int main( int argc, char *argv[] ) {

  FILE *fin ;
  int n ;
  NODE *L, *temp, *lastnumber ;

  fin = fopen( argv[1], "r" ) ;
  
  L = NULL ;

  while( fscanf( fin, "%d", &n ) != EOF ) {

    temp = ( NODE * ) malloc( sizeof( NODE ) ) ;
    
    if( L == NULL ) {

      L = temp ; lastnumber = L ;
      
    }
    
    temp -> n = n ;
    lastnumber -> next = temp ;
    lastnumber = temp ;
    
  }

  printf( "\n\nThe list of numbers is:\n") ;

  printlist( L ) ;

  fclose( fin ) ;
  
  return 0 ;
  
}

void printlist( NODE *L ) {

  if ( L == NULL ) return ;

  printf( "%d\n", L -> n ) ;

  printlist( L -> next ) ;

  return ;

}




  
