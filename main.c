#include <stdio.h>

int main()
{
	char str[100];
	char words[100][100];
	int result[100];
	int n = 0, m = 0, k = 0, f = 0, p = 0, s = 0, i = 0, q = 0, z = 0;
	printf("Enter the line:");
	fgets(str, 100, stdin);
	for (i = 0; str[i] != 0; i++)
		if (str[i] == '\n')
			str[i] = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			words[n][m] = str[i];
		}
		else
		{
			words[n][m] = 0;
			n++;
			m = -1;
		}
		i++;
		m++;
	}
	words[n][m] = 0;
	i = 0;
	q = n;
	for (p = 0; p <= q; p++)
	{
		m = 0;
		s = 0;
		for (n = p + 1; n <= q; n++)
		{							
			while (words[n][m] != 0)
			{
				if (words[n][m] == words[p][s])
					k = 1;
				else
				{
					k = 0;
					break;
				}
				m++;
				s++;
			}
			if (!(k == 1 && words[n][m] == words[p][s]))
				k = 0;
			if (k == 1)
			{
				words[p][0] = 0;
				result[z] = n;
				z++;

			}
			m = 0;
			s = 0;
		}
	}
	if (z == 0)
		printf("No duplicate words.");
	else
	{
		printf("Words that appear in entered line more than once: ");
	}
	for (i = 0; i < z; i++)
		if(words[result[i]][0] != 0)
			printf("%s ", words[result[i]]);
	return 0;
}


















