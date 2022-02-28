/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:57:20 by dpickard          #+#    #+#             */
/*   Updated: 2022/02/02 12:48:03 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*ptr_range;

	i = 0;
	if (min < max)
	{
		len = max - min;
		ptr_range = malloc(sizeof (int *) * (len +1));
		while (len > 0)
		{
			ptr_range[i] = min + i;
			len--;
			i++;
		}
		*range = ptr_range;
	}
	else
	{
		*range = NULL;
	}
	return (i);
}
/*
int	main(void)
{
	int *tab;
	int	size;
	int i = 0;

	size = ft_ultimate_range(&tab, 5, 10);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
