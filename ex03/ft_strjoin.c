/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:24:41 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/17 15:19:53 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sbs(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

int	ft_ssbs(char **strs, int size)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_sbs(strs[i++]);
	}
	return (l);
}

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
	str = malloc(ft_ssbs(strs, size) + (size - 1) * (ft_sbs(sep) - 2) +(k = 0));
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}

/*int	main(int argc, char *argv[])
{
	if (argc >= 2)
		printf("%s\n", ft_strjoin(argc - 2, argv + 2, argv[1]));
	else
		printf("Usage: %s <seperator> [<string> ...]\n", argv[0]);
}*/
