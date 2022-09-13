#include "main.h"
/**
 * main - A function that checks for alphabetic characters
 *
 * Rturn: 1 if c is uppercase 0 if otherwise
 */

int _isalpha(int c)
{
	for (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

