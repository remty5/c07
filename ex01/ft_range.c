/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:22:27 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/13 19:28:10 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*t;

	if (min >= max)
		return (NULL);
	t = malloc((max - min) * sizeof(int));
	if (t)
	{
		while (min < max--)
			t[max - min] = max;
	}
	return (t);
}

/*int	main(int argc, char *argv[])
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	if (argc == 3)
	{
		i = 0;
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		tab = ft_range(min, max);
		while (i < max - min)
			printf("%d ", tab[i++]);
		printf("\n");
	}
	else
		printf("Usage: %s <min> <max>\n", argv[0]);
}*/
