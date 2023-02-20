#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/*
* betty style doc for function main goes there
* main - Entry point for the program
* This function generates a random integer between -2147483647 and 2147483647,
* and prints whether the integer is positive, negative, or zero.
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
