#include <stdio.h>
/**
 * main - program that prints the numbers from 1 to 100
 * But for multiple of three  print Fizz
 * And for multiples of five print Buzz
 * Return: Always 0
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
printf(" FizzBuzz ");
else if (num % 3 == 0 && num % 5 != 0)
printf(" Fizz ");
else if (num == 100)
printf(" Buzz ");
else if (num % 5 == 0 && num % 3 != 0)
printf(" Buzz ");
else
printf("%d ", num);
}
printf("\n");
return (0);
}
