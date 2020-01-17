#include <stdio.h>
#define PRINT3(x, y, z) printf( "x=%d\ty=%d\tz=%d\n", x, y, z )
int main( int argc, char *argv[] ) {
int x, y, z ;
x=y=z=1;
++x || ++y && ++z ; PRINT3( x, y, z ) ;
x=y=z=1;
++x && ++y || ++z ; PRINT3( x, y, z ) ;
x=y=z=1;
++x && ++y && ++z ; PRINT3( x, y, z ) ;
  x = y = z = -1 ;
  ++x && ++y || ++z ; PRINT3( x, y, z ) ;
  x = y = z = -1 ;
  ++x || ++y && ++z ; PRINT3( x, y, z ) ;
  x = y = z = -1 ;
  ++x && ++y && ++z ; PRINT3( x, y, z ) ;
return 0 ; }
