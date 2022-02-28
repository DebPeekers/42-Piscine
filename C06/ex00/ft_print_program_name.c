/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_mane.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:58:42 by dpickard          #+#    #+#             */
/*   Updated: 2022/01/31 11:31:44 by dpickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv [0][c] != '\0')
		{
			write(1, &argv[0][c], 1);
			c++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
/*
 * Here were using a counter
 * as long as there's at least one string in our argument counter (argc)
 * we will run trough our while loop
 *
 * Our while loop is counting the argv[0] till the end and writting it
 * argv[0] is automaticaly the file name
 * we then write a new line
 */
