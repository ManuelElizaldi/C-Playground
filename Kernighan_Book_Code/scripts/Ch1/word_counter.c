#include <stdio.h>

// symbolic constants make the program more readable - in means its inside the word, out outside. In the program these words will be changed to 1 and 0 
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words and character in input*/
// the variable state records wether the program is in a word or not. Why? because is c == tab, blank or new line 
// the value of state = out. If it encounters any of this values, it means that the program is outside a word. 


int main () {

    int c, nl, nb, nw, nc, state;
    char word;
    
    state = OUT;
    nl = nw = nc = 0;

    

    while((c = getchar()) != EOF){
        for(word = c, printf("%c", word);
        
            ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;

        if (c == ' ')
            ++nb;
        
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    
    }   

printf("New line: %d  New word: %d  new character: %d  New blank: %d last character: %c\n", nl, nw, nc, nb, word);
}

// The in and out state is required to count how many new words, every time the value of the variable state switches, it ++nw; 
// || = or 
// && = and 

/*
if (expression)
statement1
else
statement
*/