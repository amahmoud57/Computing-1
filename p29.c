/********************************************************************************/
/*                                                                              */
/* Programmer: Abdullah Mahmoud                                                 */
/*                                                                              */
/* Program 29: Remove Duplicates                                                */
/*                                                                              */
/********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {

  int x, y ;

} ;

bool duplicateExists( struct point *nodupes, int j, struct point p) ;

int getNumberOfLines( FILE *fin ) ;

int compare(const void * a, const void * b) ;

int main( int argc, char *argv[] ) {

  int i, j, lines ;
  FILE *fin, *fout ;
  struct point *orig, *nodupes ;
  
  fin = fopen( argv[1], "r" ) ;
  fout = fopen( "noduplicates", "w" ) ;

  lines = getNumberOfLines( fin ) ;

  orig    = ( struct point * ) malloc( sizeof( struct point ) * lines ) ;
  nodupes = ( struct point * ) malloc( sizeof( struct point ) * lines ) ;
  
  for ( i = 0 ; i < lines ; i++ ) {

    fscanf( fin, "%d %d\n", &orig[i].x, &orig[i].y ) ;

  }
  
  for( i = 0, j = 0 ; i < lines ; i++ ) {
  
    if ( !duplicateExists ( nodupes, j, orig[i] ) ) {

      nodupes[j].x = orig[i].x ;
      nodupes[j].y = orig[i].y ;

      j++ ;

    }

  }

  qsort( nodupes , j, sizeof( struct point ), compare) ;

  for ( i = 0 ; i < j ; i++ ) {

    fprintf( fout, " %d %d\n", nodupes[i].x, nodupes[i].y );

  }
  
  fclose( fin ) ;
  fclose( fout ) ;
  
  return 0 ;
  
}

bool duplicateExists( struct point *nodupes, int j, struct point p ) {

  int i ;
  
  for ( i = 0 ; i < j ; i++ ) {

    if( nodupes[i].x == p.x && nodupes[i].y == p.y ) return true ;

  }

  return false ;

}

int getNumberOfLines( FILE *fin ) {

  int x, y, count = 0 ;

  fseek( fin, 0, SEEK_SET ) ;
  
  while ( fscanf( fin, "%d %d\n", &x, &y ) != EOF ) {

    count++ ;

  }

  fseek( fin, 0, SEEK_SET ) ;
  
  return count ;
      
}

int compare(const void * a, const void * b) {

  struct point *p1 = ( struct point * ) a ;
  struct point *p2 = ( struct point * ) b ;
    
  if( p1->x == p2->x ) return p1->y - p2->y ;

  return p1->x - p2->x ;

} 
