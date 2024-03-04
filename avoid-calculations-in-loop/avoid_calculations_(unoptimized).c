#include <stdio.h> 
void main() { 
	int i, arr[1000]; 
 	int a = 17, b = 5, c = 25, d = 7; 
 	
// Calculating a constant expression for each iteration is not good. 
 	for(i = 0; i < 1000; ++i) { 
 		arr[i] = (((c % d) * a / b) % d) * i; 
 		printf("%d\n", arr[i]);
 	}	 
}
