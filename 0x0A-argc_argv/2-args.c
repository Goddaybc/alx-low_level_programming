#include <stdio.h>
/**
 * main - Prints all argument
 * @argc: argument count
 * @argv: array of pointers to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; ++i)
printf("%s\n", argv[i]);
return (0);
}
