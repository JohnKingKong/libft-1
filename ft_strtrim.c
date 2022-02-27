#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	while (s1[i] == ((char *)set)[0])
	{
		i++;
	}
	j = ft_strlen((char *)s1);
	while (s1[j] == ((char *)set )[0])
	{
		printf("testj\n");
		j--;
	}
	printf("i = %d\n", i);
	printf("j = %lu\n", ft_strlen((char *)s1) - j - i - 1);
	return (ft_substr(s1, i, ft_strlen((char *)s1) - j));
}

int main()
{
	char *str = "oooell";
	char *set = "o";

	printf("%s\n", ft_strtrim(str, set));
}

// i; would be the start of the substr and j; the len (ft_strlen(s1) - j);
// i++; --j; substr(s1, i, ft_strlen(s1) - j);
// set could be multiple chars tho, so idk about that yet.