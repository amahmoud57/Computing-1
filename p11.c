/*************************************************************/
/*                                                           */
/* Programmer: Abdullah Mahmoud                              */
/*                                                           */
/* Program 11: Random Numbers                                */
/*                                                           */
/* Time to Complete: 12 minutes                              */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

  FILE *fout ;
  int i, n ;

  n = atoi( argv[1] ) ;
  
  fout = fopen( "lotsofnumbers", "w" ) ;

  for ( i = 1 ; i <= n ; i++ )

    fprintf( fout, "%d\n", ( rand() % ( 20 + 20 + 1 )) -40 ) ;

  fclose ( fout ) ;
  
  return 0 ;
  
}

