/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:45:00 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/27 16:16:30 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter ++;
		str ++;
	}
	return (counter);
}
/*
int	main(void)
{
	int  i;
	i = ft_strlen ("Hello");

	printf("%d", i);
}
*/
