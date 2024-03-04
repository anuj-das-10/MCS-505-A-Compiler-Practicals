#include <stdio.h> 

void main(void) { 
 	int i, a = 27; 
 	int* ptr = &a; 

//  Dereferencing pointer inside loop is costly 
 	for(i = 1; i < 11; ++i) { 
 		*ptr = *ptr + i; 
 	} 
 	printf("Value of a : %d", a); 
} 

