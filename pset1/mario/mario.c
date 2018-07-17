#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input = get_int("Please enter your pyramid height: ");

    if (input >= 0 && input < 24) {

    for (int l = 0; l < input; l++){
        //To print the spaces(s)
        for(int s = input - l; s > 1; s--){
            printf(" ");
        }
        //To print the bricks(b)
        for (int b = 0; b< l+2; b++){
            printf("#");
        }
        //New line
            printf("\n");
        }

    } else {
        main();
    }

}