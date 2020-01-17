/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program:                   */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

struct point { int x, y ; } ;

void tromino( struct point board, struct point missing, int boardSize ) ;

int main( int argc, char *argv[] ) {

  int boardSize ;
  struct point missing, board ;

  do {
    printf( "\n-----------------------------------------" ) ;
    printf( " Enter the size of board : " ) ;
    scanf( "%d", &boardSize ) ;
    
    if ( boardSize ) {

      printf( "\nEnter the coordinates of the missing square: " ) ;
      scanf( "%d%d", &missing.x, &missing.y ) ;
      printf( "\n\nTiling\n------\n" ) ;
      board.x = board.y = 0 ;
      tromino( board, missing, boardSize ) ;

    }
      
  } while ( boardSize ) ;

  return 0 ;
  
}

void tromino( struct point board, struct point missing, int boardSize ) {

  int halfSize = boardSize / 2 ;
  struct point center, upperLeft, upperRight, lowerRight, lowerLeft ;
  struct point tempBoard, tempMissing;
  if ( boardSize == 2 ) {
    printf( "%d%d ", board.x + 1, board.y + 1 ) ;

    if ( board.x == missing.x )
      if ( board.y == missing.y )
	printf( "UR\n" ) ;

      else
	printf( "LR\n" ) ;

    else if ( board.y == missing.y )
      printf( "UL\n" ) ;

    else

      printf( "LL\n" ) ; 

    return ;

  }

  center.x = board.x + halfSize ;
  center.y = board.y + halfSize ;

  printf( "%d%d ", center.x, center.y ) ;

  if( missing.x < center.x ) {

    upperRight.x = lowerRight.x = center.x ;
    upperRight.y = lowerRight.y ;
    lowerRight.y = center.y - 1 ;

    if( missing.y < center.y ) {

      printf( "UL\n" ) ;

      upperLeft.x = center.x - 1 ;
      upperLeft.y = center.y ;
      lowerLeft.x = missing.x ;
      lowerLeft.y = missing.y ;

    }

    else {

      printf( "LR\n" ) ;
      upperLeft.x = missing.x ;
      upperLeft.y = missing.y ;
      lowerLeft.x = center.x - 1 ;
      lowerLeft.y = center.y - 1 ;

    }

  }

  else {

    upperLeft.x = lowerLeft.x = center.x - 1 ;
    upperLeft.y = center.y ;
    lowerLeft.y = center.y - 1 ;

    if( missing.y < center.y ) {

      printf( "UL\n" ) ;

      upperRight.x = center.x ;
      upperRight.y = center.y ;
      lowerRight.x = missing.x ;
      lowerRight.y = missing.y ;

    }

    else {

      printf( "LL\n" ) ;

      upperLeft.x = missing.x ;
      upperLeft.y = missing.y ;
      lowerLeft.x = center.x ;
      lowerLeft.y = center.y - 1 ;

    }

  }

  tempBoard.x = board.x ;
  tempBoard.y = board.y + halfSize ;
  tempMissing.x = upperLeft.x ;
  tempMissing.y = upperLeft.y ;
  
  tromino( tempBoard, tempMissing, halfSize ) ; 

  tempBoard.x = board.x + halfSize;
  tempBoard.y = board.y + halfSize ;
  tempMissing.x = upperRight.x ;
  tempMissing.y = upperRight.y ;
  
  tromino( tempBoard, tempMissing, halfSize ) ; 

  tempBoard.x = board.x + halfSize ;
  tempBoard.y = board.y ;
  tempMissing.x = lowerRight.x ;
  tempMissing.y = lowerRight.y ;
  
  tromino( tempBoard, tempMissing, halfSize ) ; 

  tempBoard.x = board.x ;
  tempBoard.y = board.y ;
  tempMissing.x = lowerLeft.x ;
  tempMissing.y = lowerLeft.y ;
  
  tromino( tempBoard, tempMissing, halfSize ) ; 

  return ;
  
}

  
