#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers of argument
 * @argc: argument count
 * @argv: array of pointer to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc <= 2)
{
printf("%s\n", "Error");
return (1);
}
else
printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
return (0);
}
