/************************************************************/
/*                                                          */
/* Programmer: Abdullah Mahmoud                             */
/*                                                          */
/* Program 12: Brute Force Primes                           */
/*                                                          */
/************************************************************/
#include <stdio.h>

int IsPrime( int n ) ;

int main( int argc, char *argv[] ) {

  int n, number ;

  printf( "\nPlease input a positive number: " ) ;
  
  while ( scanf( "%d", &n ) != EOF ) {
    
    if ( IsPrime( n ) == 1 ) {

      printf( "\nThe number %d is prime\n", n ) ;

    }
      
    else {

      printf( " \nThe number %d is not prime\n", n ) ;

    }
      
    printf( "\nPlease input a positive number:\n " ) ;
    
    }

  return 0 ;
  
}
  
int IsPrime( int n ) {

  int i, count = 0 ;
  
  if ( n == 2 ) return 1 ; 

  if ( n % 2 == 0 ) return 0 ;
  
  for ( i = 1 ; i <= n ; i++ ) if ( ( n % i ) == 0 ) count ++ ;

  return count == 2 ;

}


  






     


      


 

    


 




  




