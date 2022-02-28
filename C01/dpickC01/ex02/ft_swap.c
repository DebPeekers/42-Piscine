/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:13:52 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/24 10:45:44 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)

{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("before: %d %d\n", a, b);
	}
*/
