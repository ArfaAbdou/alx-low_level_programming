#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/*
*betty style doc for function main goes here

*This program generates a random number using the rand function
*and prints the last digit of the number,along with a message indicating
*whether the last digit is greater than 5, less than 6 and not 0, or equal to 0
*/

int main(void)
{
/* Declare an integer variable n to store the randomly generated number*/
int n;

srand(time(0));

n = rand();

/*
* Print a message indicating that the last
* digit of n will be displayed next
*/

printf("Last digit of %d is ", n);

/*
*Compute the last digit of n using the modulus
* operator and store it in a variable last_digit
*/
int last_digit = n % 10;

if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}


return (0);
}
