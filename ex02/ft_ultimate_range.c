/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:37:36 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/13 19:27:56 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*t;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = malloc((max - min) * sizeof(int));
	*range = t;
	if (t)
	{
		size = max - min;
		while (min < max--)
			t[max - min] = max;
		return (size);
	}
	else
		return (-1);
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
		ft_ultimate_range(&tab, min, max);
		while (i < max - min)
			printf("%d ", tab[i++]);
		printf("\n");
	}
	else
		printf("Usage: %s <min> <max>\n", argv[0]);
}*/
