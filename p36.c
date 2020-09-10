/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 36: Simulating Call by Reference       */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

void swap( int *x, int *y ) {

    int temp ;

    temp = *x ;
    *x = *y ;
    *y = temp ;

    return ;

}

int main( int argc, char *argv[] ) {

  int a, b ;

  a = atoi( argv[1] ) ;
  b = atoi( argv[2] ) ;

  printf( "\na is %d. b is %d.\n", a, b ) ;

  swap( &a, &b ) ;

  printf( "\na is %d. b is %d.\n", a, b ) ;

  return 0 ;

}


