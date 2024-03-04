#include<stdio.h>

char input[100];
int i = 0, error = 0; 		// By default i and error initializes with 0

main() {
    printf("Recursive Descent Parsing for Grammar:\n");
    printf("\nE->TE'\nE'->+TE'/@\nT->FT'\nT'->*FT'/@\nF->(E)/id\n\n");
    printf("Enter the string:  ");
    gets(input);
    E();
    if(input[i] == '\0' && error == 0) {
        printf("String Accepted!");
    }
    else {
        printf("String Rejected!");
    }
}

E() {
    T(); Eds();
}
T() {
    F(); Tds();
}
Eds() {
    if(input[i]=='+') {
        i++;
        T(); Eds();
    }
}
Tds() {
    if(input[i]=='*') {
        i++;
        F(); Tds();
    }
}
F() {
    if(input[i] == '(') {
        i++;
        E();
        i++;
    }
    else if(input[i] == 'i') {
        i++;
    }
    else {
        error = 1;
    }
}


