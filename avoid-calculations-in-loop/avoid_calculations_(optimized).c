#include <stdio.h> 
void main() { 
	int i, arr[1000]; 
 	int a = 17, b = 5, c = 25, d = 7; 
//  Pre calculating the constant expression 
 	int temp = (((c % d) * a / b) % d); 
 	for(i = 0; i < 1000; ++i) { 
 		arr[i] = temp * i; 
 		printf("%d\n", arr[i]);
 	} 
}
