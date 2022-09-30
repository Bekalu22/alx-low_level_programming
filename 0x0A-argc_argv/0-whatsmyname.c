#include <stdio.h>

/**
 * main - write a program that prints its name, followed by new line
 * if you rename the program it will print the new name, without having
 * to compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: this is the arguement count
 *
 * @argv: this is the argument vector
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
