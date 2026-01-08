#include <stdio.h>

/*count characters in input 1st version  ++nc is increment by 1*/

int main(){
    long nc;

    nc = 0;

    while (getchar() != EOF){
        ++nc;
    
    printf("%ld\n", nc);    
    }

}