#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float input = get_float("Change owed: ");
    //avoid rounding issues by multiplying by 100 and rounding to closest integer
    int change = round(input * 100);
    int coins = 0;

    if (change > 0) {

            while(change >= 25){
                change = change - 25;
                coins++;
            }
            while(change >= 10){
                change = change - 10;
                coins++;
            }
            while(change >= 5){
                change = change - 5;
                coins++;
            }
            while(change >= 1){
                change = change - 1;
                coins++;
            }
            printf("%d\n", coins);
} else {
     main();
}

}