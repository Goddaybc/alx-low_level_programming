#include "main.h"
/**
 * _isalpha - alpha function to check if c is a letter, lowercase or uppercase
 * @c: is the int that we will use for the argument of the function
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
