#include "main.h"

int find_len(char  *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
* find_len - finds the length of a string
* @str: the string to be measured
*
* Return: The length of the string
*/
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
* create_xarray - creates an array of chars and initializes it with
*    the character 'x'. Adds a terminating null byte.
* @size: The size of the array to be initialized.
*
* Description: if there is insufficient space, the
*       function exits with a status of 98.
*Return: A pointer to the array.
*/
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	
	return (array);
}

/**
* iterate_zeroes - iterates through a string of numbers containing 
*  leading zeroes until it hits a non-zero number.
* @str: the string of numbers to be iterate through.
*
* Return: A pointer to the next non-zero element.
*/
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
* get_digit - converts a digit character to a corresponding int.
* @c: the character to be converted.
* 
* Description: if c is a non-digit, the function exits with
*      a status of 98.
* Return: The converted int.
*/
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}
/**
* get_prod - multiplies a string of numbers by a single digit.
* @prod: the buffer to store the result
* @mult: the string of numbers.
* @digit: the single digit.
* @zeroes: the necessary number of leading zeroes.
*
* Description: if mult contains a non-digit, the function exits with a
*     status value of 98.
*/
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
* add_nums - adds the numbers stored in two strings.
* @final_prod: the buffer storing the running final product.
* @next_prod: the next product to be added.
* @next_len: the length of next_prod.
*/
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	
