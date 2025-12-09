#include <stdio.h>
// pending:
/*Exercise 1-8. Write a program to count blanks, tabs, and newlines.
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.*/


int main(){

    int nb, c; 

    nb = 0;

    while((c = getchar() != EOF)){
        if (c == ' ')
        ++nb;
    }

    printf("%d\n", nb);

}