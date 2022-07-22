#include <stdio.h>
/**
 * main - write program name
 * @argc: argument count
 * @argv: array of pointer to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
