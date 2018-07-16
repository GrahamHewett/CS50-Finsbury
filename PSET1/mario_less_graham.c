#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare height local to entire main function.
    int height;

    // loop to get a valid number from user
    do
    {
        height = get_int("please enter a pyramid height between 0 and 23: ");
    }
    while (height < 0 || height > 23);

    //loop for the rows
    for (int i = 0; i < height; i++)
    {
        //loop for the spaces printed on each row.
        for (int space = (height - 2 - i); space >= 0; space--)
        {
            printf(" ");
        }
        //loop for the hashes printed on each row.
        for (int hash = 1; hash <= (i + 2); hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
