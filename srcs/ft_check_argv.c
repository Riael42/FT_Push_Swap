/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:16:12 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:17:44 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_argv(int argc, char **argv)
{
	int	i;
	int	j;
	int	err;

	i = 1;
	err = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			err += (ft_is_chars(argv[i][j], " +-0123456789") == 0);
			j += 1;
		}
		i += 1;
	}
	return (err > 0);
}
