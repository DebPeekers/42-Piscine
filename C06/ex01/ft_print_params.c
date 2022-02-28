/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:49:30 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/31 11:31:00 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	s1;
	int	c;

	s1 = 1;
	if (argc > 1)
	{
		while (s1 < argc)
		{
			c = 0;
			while (argv [s1][c] != '\0')
			{
				write(1, &argv[s1][c], 1);
				c++;
			}
			s1++;
			write (1, "\n", 1);
		}
	}
	return (0);
}

/*
c is counting s1 representing
all arrays imputted after argv[0]
whilst there are arrays to print
in argc
each array will count through and write
it will write a new line a repeat
until their are no more arrays in argc to print
*/
