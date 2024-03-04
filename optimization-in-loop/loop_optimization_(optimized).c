#include <stdio.h> 

void main() {  
// Here the same work is done without counter overhead 
  int i, fact[5] = { 1, 1, 2, 6, 24 };
  	for(i = 0; i < 5; ++i) { 
 		printf("%d  ", fact[i]); 
 	}
}
