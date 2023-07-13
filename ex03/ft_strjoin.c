/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:24:41 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/13 19:27:29 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (size == 0)
	{
		str = malloc(1);
		if (str)
			*str = '\0';
		return (str);
	}
	str = malloc(sizeof(strs) + (sizeof(sep) - 2 * sizeof(char)) * (size - 1));
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
	}
	return (str);
}

/*int	main(int argc, char *argv[])
{
	if (argc >= 2)
		printf("%s\n", ft_strjoin(argc, argv, argv[1]));
	else
		printf("Usage: %s <seperator> [<string> ...]\n", argv[0]);
}*/
