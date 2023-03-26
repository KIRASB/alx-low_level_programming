#include "main.h"
/**
 * _isalpha - this function check if the input if it's a alphabet
 * @c: is a variable that countain the input
 * Return: always 0 (Succes)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
