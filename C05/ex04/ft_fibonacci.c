/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:59:05 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/28 17:59:21 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
	printf("%d\n", ft_fibonacci(2));
}


(read code down to up for notes:)
Is working backwards to calculate circle thing
each number is calculated by the two numbers before being added together
the functions starts at 0 and 1 so is automaticlay one if 0 or 1
cannot start with a negative number
*/
