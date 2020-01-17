/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 4: The sizeof Operator                 */
/*                                                */
/* Time to Complete: 15 minutes                   */
/*                                                */
/**************************************************/

#include <stdio.h>

int main( int argc, char *argv[] ) { 

   printf( "\nThe size of an integer is %ld bytes\n" , sizeof( int ) ) ;

   printf( "\nThe size of a short integer is %ld bytes\n" , sizeof( short int) ) ;
   
   printf( "\nThe size of a long integer is %ld bytes\n" , sizeof( long int ) ) ;

   printf( "\nThe size of a long long integer is %ld bytes\n" , sizeof( long long int ) ) ;

   printf( "\nThe size of a character is %ld byte\n" , sizeof( char ) ) ;
	   
   printf( "\nThe size of a float is %ld bytes\n" , sizeof( float ) ) ;
  
   printf( "\nThe size of a double is %ld bytes\n" , sizeof( double ) ) ;

   printf( "\nThe size of pointer to an integer is %ld bytes\n" , sizeof( int* ) ) ;

   printf( "\nThe size of a pointer to a pointer to an int is %ld bytes\n" , sizeof( int** ) ) ;

   printf( "\nThe size of pointer to a float is %ld bytes\n" , sizeof( float* ) ) ;

      printf( "\nThe size of this thing %ld bytes\n" , sizeof( "Billy Rohr" ) ) ;
   
  return 0 ;

}

