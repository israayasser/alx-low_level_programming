#include <stdio.h>
#include <usistd.h>
/**
 * main - Entry point
 *
 * Description: C program that prints specific sentence
 *
 * Return: Always 1 (Success)
 */
int main (void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
