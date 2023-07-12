/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:52:47 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/12 16:40:58 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	if (dest)
	{
		dest[i] = '\0';
		while (i--)
			dest[i] = src[i];
	}
	return (dest);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("str: %s\ndup: %s\n", argv[1], ft_strdup(argv[1]));
	else
		printf("Usage: %s <string>\n", argv[0]);
}*/
