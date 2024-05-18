#include <stdio.h>
#include <cs50.h>

// for question mark blocks in mario
// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }


// for blocks in mario
// int main(void)
// {
//     int n = 3;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }


// int main(void)
// {
//     // making it dynamic
//     int n = get_int("Size: ");
//     // if the user enters a negative value he will be asked again for an int
//     while (n < 1)
//     {
//         n = get_int("Size: ");
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// making it more efficient
int main(void)
{
    int n;

    // prompt user for positive integer 
    do
    {
         n = get_int("Size: ");
    }
    while (n < 1);
    {
        n = get_int("Size: ");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
