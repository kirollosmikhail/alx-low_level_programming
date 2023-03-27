/**
 * rev_string - Reverses string
 *
 * @s: Input string
 *
 * Return: reverse String
 */

void rev_string(char *s)
{
	char r = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	i++;
	for (j = 0; j < i; j++)
	{
		i--;
		r = s[j];
		s[j] = s[i];
		s[i] = r;
	}
}
