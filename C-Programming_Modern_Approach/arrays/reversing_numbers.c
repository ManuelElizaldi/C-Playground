#include <stdio.h>

#define N 10

int main(){
    int a[N], i;
    printf("Enter %d numbers:", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    // small note in this for loop I was doing i = N (10), but that is incorrect since arrays are n-1 index. Same as python
    // by doing n = 10 I telling the computer to print the information stored in that position of memory, printing random junk information. 

    printf("In reverse order:");
    for (i = N - 1; i >= 0; i--){
        printf("%d ", a[i]);
        
    }
printf("\n");
   

}
