#include <stdio.h>

#define N 10
//multidimensional array:
int m[5][9];
double ident [N][N];
int row, col;

int main(void){
    // creating an identity matrix
    for(row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            if (row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;
        }
    }
}