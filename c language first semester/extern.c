#include<stdio.h>
int i;
increment( ) {i++; printf( "i= %d\n", i) ; }
decrement( ){i--; printf( "i= %d\n", i) ;}
main( ){
printf( "\n i= %d", i) ;
increment( ) ; increment( ) ;
decrement( ) ; decrement( ) ;
}
