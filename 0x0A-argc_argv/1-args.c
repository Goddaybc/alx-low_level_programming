#include <stdio.h>
/**
 * main - Prints number of arguments
 * @argc: argument count
 * @argv: array of pointers to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
*argv = *argv;
printf("%d\n", argc - 1);
return (0);
}
