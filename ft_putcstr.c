#include "libft.h"

void	ft_putcstr(char *str, char c, int size, char pos)
{
	char	tab[512];
	int		i;

	if (size < 512 && size > 0)
	{
		i = -1;
		if (pos == 'L')
			while (*str && ++i < size)
				tab[i] = *(str++);
		while (++i < size)
			tab[i] = c;
		if (pos == 'R')
		{
			i = size - ft_strlen(str) - 1;
			while (*str && ++i < size)
			{
				tab[i] = *str;
				str++;
			}
		}
		tab[size] = '\0';
		ft_putstr(tab);
	}
}
