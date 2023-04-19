/**
 * print_name -  a function that prints a name.
 *
 * @name: the name.
 * @f: Function pointer to passed name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f)
	f(name);
}
