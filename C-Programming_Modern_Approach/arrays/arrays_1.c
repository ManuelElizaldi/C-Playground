#include <stdio.h>
#define N 10

int a[N];
int i;

int main(){

    for(i=0; i < N; i++)
    scanf("%d", &a[i]);
    printf("%d", a[i]);
    return 0;
}