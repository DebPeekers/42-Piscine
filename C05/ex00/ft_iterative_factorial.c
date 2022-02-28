/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:02:07 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/28 12:52:50 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			factorial *= nb;
			nb--;
		}
		return (factorial);
	}
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(2));
	return (0);
}
*/
