/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:25:30 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/28 12:54:38 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	i = 1;
	sq = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d",ft_sqrt(4));
}

multiplying accross 1 * 1 whilst less then our number
adding 1 until we reach out number
and giving the remain of our number as i to return i
Square root multiplies accross and adds down so were doing this with our funtion.
*/
