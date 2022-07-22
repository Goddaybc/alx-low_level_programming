#include <stdio.h>
/**
 * main - prints number of argument
 * @argc: argument count
 * @argv: arrays of pointer to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
*argv = *argv;
printf("%s\n", argc - 1);
return (0);
}
