#include <stdio.h>

void print_alphabet(void);

void print_alphabet(void){
    char c;

    for (c = 'A'; c <= 'Z'; c++){
        _putchar(c);
    }
     _putchar('\n');
}

int main (void){

    print_alphabet();
}