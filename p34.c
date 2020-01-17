/*************************************************************************/
/*                                                                       */
/* Programmer: Abdullah Mahmoud                                          */
/*                                                                       */
/* Program 34: Relatively Prime to 351                                   */
/*                                                                       */
/* Time to Complete: 15 minutes                                          */
/*                                                                       */
/*************************************************************************/

#include <stdio.h>

int gcd( int n1, int n2 ) ;

int main( int argc, char *argv[] ) {

  int i ;

  for ( i = 1 ; i <= 350; i++ ) {
  
  if ( gcd( i, 351 ) == 1 ) printf( " \n351 and %d are relatively prime\n", i ) ;

   }
	  
  return 0 ;

}

int gcd( int n1, int n2 ) {
  
  FILE *fin ;
  int smaller, i, j ;

    if ( n1 < n2 ) smaller = n1 ;
    else           smaller = n2 ;

    for ( j = smaller ; j > 0 ; j-- ) {

      if ( ( n1 % j == 0 ) && ( n2 % j == 0 ) ) break ;

    }

  return j ;
    
}
  
 
  


