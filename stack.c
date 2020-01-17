/*******************************************/
/*                                         */
/* stack.c                                 */
/*                                         */
/*******************************************/

#include "stack.h"

#define current_stacksize( p_S ) ( p_S -> top - p_S -> base)

status init_stack( stack *p_S ) {

  p_S -> top = p_S -> base ;

  return OK ;
  
}

bool empty_stack( stack *p_S ) {

  return ( p_S -> top == p_S -> base ) ? TRUE : FALSE ;

}

status push( stack *p_S, char c ) {
  
  if ( current_stacksize( p_S ) == MAXSTACKSIZE ) return ERROR ;

  p_S -> top ++ ;
  *p_S -> top = c ;

  return OK ;

}

status pop( stack *p_S, char *p_c ) {

  if( empty_stack( p_S ) == TRUE ) return ERROR ;

  *p_c = *p_S -> top ;
  
  p_S -> top-- ;
  
  return OK ;

}
  
  
