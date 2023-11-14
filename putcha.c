#include"main.h"
/**
 * putcha - going to print a character
 * @c: char input
 * Return: 1
 */	

int my_putcha(char c)
{
	return (write(1, &c, 1));
}
