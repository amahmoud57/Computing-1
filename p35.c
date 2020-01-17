/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 35: Perfect Numbers                    */
/*                                                */
/* Time to Complete: 10 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdbool.h>

bool IsPerfect( int i ) ;

int main( int argc, char *argv[] ) {

  int i ;

  for ( i = 1 ; i <= 100000 ; i++ ) {

    if ( IsPerfect( i ) ) {

     printf( "%d\n", i ) ;

    }

  }

return 0 ;

}

bool IsPerfect( int i ) {

  int sum = 0, j ;

  for ( j = i - 1 ; j >= 1 ; j-- ) {

    if ( i % j == 0 ) {

      sum = sum + j ;

    }

  }

    if ( sum == i ) {

      return true ;

  }

  return false ;

}


