#include<stdio.h>
int main( ){
 int i ;
 int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;
 for ( i = 0 ; i <= 6 ; i++ ) {
 disp( &marks[i] ) ;
 }
 return 0;
}
int disp( int *n ) {
 show( &n ) ;
 return 0;
}
int show( int **n ) {
 printf ( "%d\n", **n) ;
 return 0;
}
