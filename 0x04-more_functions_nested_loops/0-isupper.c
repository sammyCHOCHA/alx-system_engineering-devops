#include "main.h"

/**
 *  * _isupper - Check if a character is uppercase
 *   * @c: The character to check
 *    *
 *     * Return: 1 if c is uppercase, 0 otherwise
 *      */
int _isupper(int c)
{
		/*
		 * 	 * Check if the character is in the uppercase range.
		 * 	 	 * Return 1 if it is, 0 otherwise.
		 * 	 	 	 */
		return (c >= 'A' && c <= 'Z');
}
