#include <stdio.h>

/*check if the behavior of this program is correct*/

int main (){
    double nc; 

    for (nc = 0; getchar() != EOF; ++nc);

    printf("%ld\n", nc)
    ;

}
