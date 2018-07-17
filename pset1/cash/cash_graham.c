#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //declare main function variables
    float amount;
    int coinCount = 0;

    //Require the user to enter a cash amount.
    do
    {
        amount = get_float("please enter the total amount to be paid: ");
    }
    while (amount < 0);
    //convert dollar amount into cents and round to the nearest integer to account for imprecision of float values.
    amount = rintf(amount * 100);

    //Subtract a coin value in cents from the amount as long as the total amount is greater than that.
    //increase the coin count by 1 each time a subtraction takes place.
    while (amount >= 25)
    {
        amount -= 25 ;
        coinCount++;
    }

    while (amount < 25 && amount >= 10)
    {
        amount -= 10;
        coinCount++;
    }

    while (amount < 10 && amount >= 5)
    {
        amount -= 5;
        coinCount++;
    }

    while (amount < 5 && amount >= 1)
    {
        amount -= 1;
        coinCount++;
    }
    // output the minimum number of coins needed to give the correct change
    printf("%i\n", coinCount);
}