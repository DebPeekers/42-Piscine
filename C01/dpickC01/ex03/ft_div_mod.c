/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:32:09 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/24 11:20:02 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 3;
	b = 4;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("value of a is:%d", *div);
	printf("\nvalue of b is:%d\n", *mod);
	return (0);
}
*/
