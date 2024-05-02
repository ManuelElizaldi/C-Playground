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
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    for (int g = 0; g < gap; g++)
    {
        printf(" ");
    }
    for (int k = 0; k < blocks; k++)
    {
        printf("#");
    }
    printf("\n");
}


// looking for something like this:
//    #  #
//   ##  ##
//  ###  ###
// ####  ####
