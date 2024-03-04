#include <stdio.h> 

void main(void) { 
 	int i, a = 27; 
 	int* ptr = &a; 

//  Pointer dereferencing creates lots of trouble in memory. 
//  So better assign it to some temporary variable and 
//  then use that temporary variable in the loop.

	int temp = *ptr;
 	for(i = 1; i < 11; ++i) { 
 		temp = temp + i; 
 	} 
 	a = temp;
 	printf("Value of a : %d", a); 
} 

