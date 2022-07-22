#include <stdio.h>
/**
 * main - Prints number of arguement
 * @argc: argument count
 * @argv: arrays of pointer to CLI arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
*argv = *argv;
printf("%s\n", argc - 1);
return (0);
}
