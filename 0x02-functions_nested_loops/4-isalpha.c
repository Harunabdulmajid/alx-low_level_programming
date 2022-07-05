#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: something that needs to be checked
 * Return: Return result
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
