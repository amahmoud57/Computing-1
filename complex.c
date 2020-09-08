/*******************************************************************/
/*                                                                 */
/* Programmer: Abdullah Mahmoud                                    */
/*                                                                 */
/* Program 49: complex.c component                                 */
/*                                                                 */
/* Time: 25 minutes                                                */
/*                                                                 */
/*******************************************************************/

#include <stdio.h>
#include "complex.h"

extern COMPLEX Add_Complex ( COMPLEX a, COMPLEX b ) {

  COMPLEX result ;

  result.real = a.real + b.real ;
  result.im = a.im + b.im ;
  
  return result ;

}

extern COMPLEX Subtract_Complex( COMPLEX a, COMPLEX b ) {

  COMPLEX result ;

  result.real = a.real - b.real ;
  result.im = a.im - b.im ;
  
  return result ;


}

extern COMPLEX Multiply_Complex ( COMPLEX a, COMPLEX b ) {

  COMPLEX result ;

  result.real = ( a.real * b.real) - ( a.im * b.im ) ;
  result.im = ( a.real * b.im ) + ( a.im * b.real ) ; 
  
  return result ;

}

extern COMPLEX Divide_Complex( COMPLEX a, COMPLEX b ) {

  COMPLEX result, num, denom, conjugate;
  
  conjugate.real = b.real;
  conjugate.im = -1 * b.im;
  
  num = Multiply_Complex( a , conjugate) ;
  denom = Multiply_Complex( b , conjugate) ;
  
  result.real = num.real / ( denom.real + denom.im ) ;
  result.im = num.im / ( denom.real + denom.im ) ;
  
  return result ;

}


  


