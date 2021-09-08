#include <stdio.h>
#include <cs50.h>

int get_cents(void);
int get_quarters(int cents);
int get_dimes(int cents);
int get_nickels(int cents);
int get_pennies(int cents);

int main(void)
{
    // Ask the user for how many cents they have.
    int cents = get_cents();

    // Get the maximum number of quarters that will fit into cents.
    int quarters = get_quarters(cents);
  
    // Update cents by subtracting maximum number of quarters.
    cents = cents - (quarters * 25);

    // Get the maximum number of dimes that will fit into the remaining number of cents.
    int dimes = get_dimes(cents);
  
    // Update cents by subtracting maximum number of dimes.
    cents = cents - (dimes * 10);

    // Get the maximum number of nickels that will fit into the remaining number of cents.
    int nickels = get_nickels(cents);
  
    // Update cents by subtracting maximum number of nickels.
    cents = cents - (nickels * 5);

    // Get the maximum number of pennies that will fit into the remaining number of cents.
    int pennies = get_pennies(cents);
  
    // Update cents by subtracting maximum number of pennies.
    cents = cents - (pennies * 1);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print least number of coins to create change
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO: Implement a function to ask the user how many cents they have.
    return 0;
}

int get_quarters(int cents)
{
    // TODO: Implement a function find how many quarters are in a given number of cents.
    return 0;
}

int get_dimes(int cents)
{
    // TODO: Implement a function to find how many dimes are in a given number of cents.
    return 0;
}

int get_nickels(int cents)
{
    // TODO: Implement a function to find how many nickels are in a given number of cents.
    return 0;
}

int get_pennies(int cents)
{
    // TODO: Implement a function to find how many pennies are in a given number of cents.
    return 0;
}
