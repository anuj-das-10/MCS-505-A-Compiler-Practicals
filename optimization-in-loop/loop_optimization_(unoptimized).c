/*
Unroll small loops: Most of the times Compiler does this automatically, but it is a 
good habit of writing optimized codes. Matrix updations using this is very 
advantageous.
*/
#include <stdio.h> 

void main() { 
	int i, fact[5]; 
 	fact[0] = 1; 
 // Overhead of managing a counter just for 4 iterations is not a good idea 
 	for(i = 1; i < 5; ++i) { 
 		fact[i] = fact[i - 1] * i; 
 	}
	 
	for(i = 0; i < 5; ++i) { 
 		printf("%d  ", fact[i]); 
 	}	 
}

