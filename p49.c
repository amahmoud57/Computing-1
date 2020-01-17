/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 49: Complex Number Module              */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include "complex.h"

int main( int argc, char *argv[] ) {

  COMPLEX a, b ;
  COMPLEX t1, t2, t3, t4 ;

  printf( "Enter the first complex number: " ) ;
  printf( "Real Part      : " ) ;
  scanf( "%f", &a.real ) ;
  printf( "Imaginary Part : " ) ;
  scanf( "%f", &a.im ) ;

  printf( "Enter the second complex number: " ) ;
  printf( "Real Part      : " ) ;
  scanf( "%f", &b.real ) ;
  printf( "Imaginary Part : " ) ;
  scanf( "%f", &b.im ) ;

  t1 = Add_Complex( a, b ) ;
  t2 = Subtract_Complex( a, b ) ;
  t3 = Multiply_Complex( a, b ) ;
  t4 = Divide_Complex( a, b ) ;

  printf( "\n" ) ;
  printf( " Add:      Real: %10.3f Imaginary: %10.3f \n", t1.real, t1.im ) ;
  printf( " Subtract: Real: %10.3f Imaginary: %10.3f \n", t2.real, t2.im ) ;
  printf( " Multiply: Real: %10.3f Imaginary: %10.3f \n", t3.real, t3.im ) ;
  printf( " Divide:   Real: %10.3f Imaginary: %10.3f \n", t4.real, t4.im ) ;

  return 0 ;
  
}

