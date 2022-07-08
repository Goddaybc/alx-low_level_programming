#include <stdio.h>
/**
 * main - program that prints the number from 1 to100
 * But for multiples of three print Fizz
 * and for multiples of five print Buzz
 * But for multiples of three and five print FizzBuzz
 * Return: 0.
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
printf("FizzBuzz ");
else if (num % 3 == 0 && num % 5 != 0)
printf("Fizz ");
else if (num == 100)
printf("Buzz ");
else if (num % 5 == 0 && num % 3 != 0)
printf("Buzz ");
else
printf("%d ", num);
}
printf("\n");
return (0);
}
