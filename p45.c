/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 45: Lowermost, Leftmost                */
/*                                                */
/* Time to Complete: 20 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

struct point {

  int x, y ;

} ;

struct point lowerleft( int n, FILE *fin, int *smallest ) ;

int main( int argc, char *argv[] ) {

  int n, smallest ;
  FILE *fin ;
  struct point answer ;
  
  fin = fopen( argv[1], "r" ) ;

  fscanf( fin,"%d\n", &n ) ;

  answer = lowerleft( n, fin, &smallest ) ;
  
  printf( "The lowermost left most point is %d %d\n", answer.x, answer.y ) ;

  printf( "It's position in the array is %d\n", smallest ) ;
  
  fclose( fin ) ;

  return 0 ;
  
}

struct point lowerleft( int n, FILE *fin, int *smallest ) {

  int i ;
  struct point *p ;
    
  p = ( struct point * ) malloc( sizeof( struct point ) * n ) ;
  
  for ( i = 0 ; i <= n ; i++ ) {

    fscanf( fin, "%d %d\n", &p[i].x, &p[i].y ) ;

  }

  *smallest = p[0].y ;
  
  for ( i = 0 ; i <= n ; i++ ) {

    if( p[i].y < p[*smallest].y )
      *smallest = i ;

    if( p[i].y == p[*smallest].y )
      if( p[i].x < p[*smallest].x)
        *smallest = i ;
      
  }
  
  return p[*smallest] ;
  
}
