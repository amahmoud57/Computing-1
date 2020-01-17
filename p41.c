/*********************************************************************/
/*                                                                   */
/* Programmer: Abdullah Mahmoud                                      */
/*                                                                   */
/* Program 41: Recursive Occurs                                      */
/*                                                                   */
/* Time to Complete: 10 minutes                                      */
/*                                                                   */
/*********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int Roccurs( int n1, int n2 ) ;

int main( int argc, char *argv[] ) {

  int n1, n2 ;
    
  n1 = atoi( argv[1] ) ;
  n2 = atoi( argv[2] ) ;

  if ( n2 / 10 != 0 ) {
    
    printf( "\nYour second number must have only one digit\n" ) ;
    
    exit (1) ;

  }
  
  printf( "\nThe number of %ds in %d is %d\n", n2, n1, Roccurs( n1, n2 ) ) ;

  return 0 ;
  
}

int Roccurs( int n1, int n2 ) {

  int x = 0 ;
    
  if ( n1 == 0 ) return 0 ;

  x = n1 % 10 ;

  if ( x == n2 ) return 1 + Roccurs( n1 / 10, n2 ) ;

  else Roccurs( n1 / 10, n2 ) ;

}



  

    
