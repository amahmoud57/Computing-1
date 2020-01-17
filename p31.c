/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 12: Brute Force Primes                 */
/*                                                */
/* Time to Complete: 18 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsPrime( int n ) ;

int main( int argc, char *argv[] ) {

  int n ;

  for ( n = 1 ; n < 2999 ; n++ ) {
    
    if ( IsPrime ( n ) && IsPrime ( n + 2 ) ) {

      printf( " %d %d\n", n, n + 2 ) ;

    }
    
  }

  return 0 ;
  
}

bool IsPrime( int n ) {

  int i, count = 0 ;
  
  if ( n == 2 ) { return true ; } 

  if ( n % 2 == 0 ) { return false ; }
  
  for ( i = 1 ; i <= n ; i++ ) {

    if ( n % i == 0 ) count ++ ;

  }
    
  return count == 2 ;

}


  






     


      


 

    


 




  




