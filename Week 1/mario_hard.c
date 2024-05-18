#include <stdio.h>
#include <cs50.h>


void print_row(int spaces, int bricks,int gap ,int blocks);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
    if (n == 1)
    {
        printf("#  #\n");
    }
    else
    {
        const int g = 2;
        for(int i = 0; i < n; i ++)
        {
            print_row(n - i - 1, i + 1, g, i + 1);
        }
    }
}

void print_row(int spaces, int bricks,int gap ,int blocks)
{
    for (int j = 0; j < spaces; j++) // n - i - 1 // spaces in fron of the pyramid, each row we want -1
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++) // i + 1 first side of the pyramid, each row we want 1 more
    {
        printf("#");
    }
    for (int g = 0; g < gap; g++) // g -> constant, we always want 2 spaces for the gap
    {
        printf(" ");
    }
    for (int k = 0; k < blocks; k++) // other side of the pyramid
    {
        printf("#");
    }
    printf("\n"); // when all loops are done, we go to the next line - next iteration - i++ 
}


// looking for something like this:
//    #  #
//   ##  ##
//  ###  ###
// ####  ####
