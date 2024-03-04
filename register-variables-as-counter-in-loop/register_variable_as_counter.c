#include <stdio.h> 

void main() { 
 	register int i; 
 	register int j; 
 	int n = 5; 

//  Using register variables as counters make the loop faster 
	for(i = 0; i < n; i++) { 
 		for(j = 0; j <= i; j++) { 
 			printf("* "); 
 		} 
 	printf("\n"); 
 	}	 
}

