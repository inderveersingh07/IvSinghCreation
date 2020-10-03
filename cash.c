#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change_owed;
    do
    {
        change_owed = get_float("Owed: ");
    }
    while (change_owed < 0);
    int cents = round(change_owed * 100);
    int quarters;
    for (quarters = 0; (cents - (quarters * 25)) >= 0; quarters++)
    {

    }
    quarters = quarters - 1 ;
    cents = cents - (quarters * 25);
    int dimes;
    for (dimes = 0; (cents - (dimes * 10)) >= 0; dimes++)
    {


    }
    if (dimes > 0)
    {
        dimes = dimes - 1;
        cents = cents - (dimes * 10);
    }
    int nickles;
    for (nickles = 0; (cents - (nickles * 5)) >= 0; nickles++)
    {

    }
    if (nickles > 0)
    {
        nickles = nickles - 1;
        cents = cents - (nickles * 5);
    }
    int pennies;
    for (pennies = 0; (cents - pennies) >= 0; pennies++)
    {

    }
    if (pennies > 0)
    {
        pennies = pennies - 1;
    }
    int coins;
    coins = quarters + dimes + nickles + pennies;
    printf("%i\n", coins);
}

