/*********************************************************************/
/*                                                                   */
/* Programmer: Abdullah Mahmoud                                      */
/*                                                                   */
/* Program 30: Inside, On, or Outside                                */
/*                                                                   */
/*********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {

  int x, y;

} ;

bool onQuad ( struct point p1, struct point p2, struct point p3 ) {

  int onX ;
  
  onX = ( ( ( p1.x * p2.y ) + ( p1.y * p3.x ) + ( p2.x * p3.y ) ) -
	  ( ( p3.x * p2.y ) + ( p1.x * p3.y ) + ( p2.x * p1.y ) ) ) ;

  return onX == 0 ;
  
}

int compareX( const void *s1, const void *s2 ) {
  
  struct point * p1 = (struct point *)s1;
  struct point * p2 = (struct point *)s2;

  if ( p1->x >  p2->x  ) return 1  ;
  if ( p1->x == p2->x  ) return 0  ;
  if ( p2->x >  p1->x  ) return -1 ;

}

int compareY( const void *s1, const void *s2 ) {

  struct point * p1 = (struct point *)s1;
  struct point * p2 = (struct point *)s2;

  if ( p1->y >  p2->y  ) return 1  ;
  if ( p1->y == p2->y  ) return 0  ;
  if ( p2->y >  p1->y  ) return -1 ;

}

int main( int argc, char *argv[] ) {
  
  struct point quad[4], p ;

  int insideX, insideY ;

  printf( "\nPlease enter the 5 points:\n" ) ;
  
  scanf( "%d %d %d %d %d %d %d %d %d %d",
	 &quad[0].x, &quad[0].y,
	 &quad[1].x, &quad[1].y,
	 &quad[2].x, &quad[2].y,
	 &quad[3].x, &quad[3].y, &p.x, &p.y ) ;

  qsort( quad, 4, sizeof( struct point ), compareX ) ;

  if ( p.x >= quad[0].x && p.x <= quad[3].x ) { insideX = 1 ; } 

  qsort( quad, 4, sizeof( struct point ), compareY ) ;

  if ( p.y >= quad[0].y && p.y <= quad[3].y ) { insideY = 1 ; }

  if ( insideX == 1 && insideY == 1 ) {

    if (    onQuad ( quad[0], quad[1], p)
	 || onQuad ( quad[1], quad[2], p )
	 || onQuad ( quad[2], quad[3], p )
	 || onQuad ( quad[3], quad[0], p ) ) {

      printf( "\nThe 5th point sits on the quadrilateral\n" ) ;

    }
    
    else {  

     printf( "\nThe 5th point sits inside the quadrilateral\n" ) ;
    }

  } 

  else {

     printf( "\nThe 5th point sits outside the quadrilateral\n" ) ;

  }
  
  return 0 ;
  
}

