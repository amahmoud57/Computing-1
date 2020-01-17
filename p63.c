/**************************************************/
/*                                                */
/* Programmer: Abdullah Mahmoud                   */
/*                                                */
/* Program 63: Parentheses Checker                */
/*                                                */
/* Time to Complete:                    */
/*                                                */
/**************************************************/

#include <stdio.h>
#include <ctype.h>
#include "stack.h"

bool match( char c, char b) ;

int main( int argc, char *argv[] ) {

  stack S, *p_S ;
  char c ;
  
  p_S = &S ;

  init_stack( p_S ) ;

  printf( "Input characters: \n" ) ;
  
  while( scanf( "%c", &c ) ) {
    
    if( c == '.' ) break ;

    if( iscntrl( c ) ) continue ;
    
    if ( match( c, *p_S -> top ) ) pop( p_S, &c ) ;
    
    else push( p_S, c ) ;
    
  }
  
  if( empty_stack( p_S ) ) printf( "The parenthesis are balanced\n" ) ;
  else                     printf( "The parenthesis are not balanced\n" ) ;

  return 0 ;
  
}

bool match( char c, char b) {
  
  if ( c == ')' && b == '(' ) return TRUE ;
  if ( c == '(' && b == ')' ) return TRUE ;
  if ( c == '{' && b == '}' ) return TRUE ;
  if ( c == '}' && b == '{' ) return TRUE ;
  if ( c == '[' && b == ']' ) return TRUE ;
  if ( c == ']' && b == '[' ) return TRUE ;
	    
  return FALSE ;

}

