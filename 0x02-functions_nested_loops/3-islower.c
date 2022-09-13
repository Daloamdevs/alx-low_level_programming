#include "main.h"
/**
 * main - A functons that checks for lowercase characters
 *
 * Returns: 1 if c is lowercase else 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
