#include <stdio.h>

int main(){

    int c;
    char word; 

    while((c = getchar()) != EOF){
        word = putchar(c);
    }
    printf("word: %c\n", word);

}