/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 13: Digit Sum Iterative                */
/*                                                */
/* Time to Complete: 5 minutes                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int digitsum( int n ) ;

int main( int argc, char *argv[] ) {

  int n ;
  FILE *fin ;

  fin = fopen( argv[1], "r" ) ; 

  while( fscanf( fin, "%d\n", &n ) != EOF )
  
    printf( "\nThe sum of the digits of %d is %d.\n\n", n, digitsum( n ) ) ;

  fclose( fin ) ;
  
  return 0 ;

}

int digitsum( int n ) {

  int sum = 0 ;

  while ( n > 0 ) {

    sum = sum + n % 10 ;

    n = n / 10 ; 

  }

  return sum ;
  
}
