#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    // Quarter = 25
    int quarters = calculate_quarters(cents);

    // Subtracting the quarters from the change
    cents = cents - (quarters * 25);

    // Dimes = 10
    int dimes = calculate_dimes(cents);

    // Subtracting the dimes from the change
    cents = cents - (dimes * 10);

    // nickel = 5
    int nickles = calculate_nickles(cents);

    cents = cents - (nickles * 5);

    // penny = 1
    int pennies = calculate_pennies(cents);

    cents = cents - pennies;
    // Sum the number of quarters, dimes, nickels, and pennies used
    // Print that sum

    int change = quarters + dimes + nickles + pennies;

    printf("%i \n", change);

}

int calculate_quarters(int cents)
{
    // calculate how many quarters you should give the customer
    // there could be an easier way of doing this
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickles(int cents)
{
    int nickles = 0;
    while (cents >= 5)
    {
        nickles++;
        cents = cents - 5;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}
