#include <stdio.h>
/**
 * main - Function name
 * Return: 0 if program runs successfully
 */
int main(void)
{
int n, a[5];
int *p;
a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] + %d\n", a[2]);
return (0);
}
