/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:08:54 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/26 19:06:42 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strcmp(char *s1, char *st)
{
	int	i;

	i = 0;
	while (s1[i] == st[i] != '\0' && st[i] != '\0')
	i++;
	return (s1[i] - st[i]);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("hello", "hello1"));
}

Actual comments
line 18 while string matches string 
and is not at the end of the line it will add continuously 
and return the difference I thnk on hte ASCII table
*/
