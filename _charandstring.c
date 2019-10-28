#include "holberton.h"
/**
 * printString - Print String
 * @lista: Var list
 * Return: 0
 */
int printString(va_list lista)
{
int i, cont = 0;
char *string;

string = va_arg(lista, char *);
if (string == NULL)
string = "(null)";

for (i = 0; string[i]; i++)
cont += _putchar(string[i]);

return (cont);
}
/**
 * printChar - Print String
 * @lista: Var list
 * Return: 0
 */
int printChar(va_list lista)
{
int cs = va_arg(lista, int);
if (cs >= 32 && cs < 128)
{
return (_putchar(cs));
}
return (0);
}

