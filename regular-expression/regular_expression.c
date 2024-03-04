#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
	char str[50];
	int i, a = 0, b = 0, error = 0;
	printf("Enter a string:  ");
	gets(str);
	
	int length = strlen(str);

	for(i = 0; i < length; i++) {
		if(str[i] == 'a' || str[i] == 'b') {
			if(str[i] == 'a')	a++;
			if(str[i] == 'b')	b++;
		}
		else {
			printf("%s is not recognized!", str);
			exit(0);
		}
	}
	
	if(length == 0 || b == 0) {
		printf("%s is recognized under rule a*", str);
		exit(0);
	}
	
	if(length == 3 && a == 1 && b == 2 && str[0] == 'a' && str[length-1] == 'b') {
		printf("%s is recognized under rule abb", str);
		exit(0);
	}
	
	if(length > 1 && a >= 0 && b >= 1) {
		if(str[0] == 'a' && str[length-1] == 'b') {
			for(i = 1; i < length-1; i++) {
				if(str[i] == 'b' && str[i+1] == 'a') {
					error++;
				}
			}
		} else {
			error++;
		}	
	} 	
		
	if(error > 0) 
		printf("%s is not recognized!", str);
	else 
		printf("%s is recognized under rule a*b+", str);
}


















