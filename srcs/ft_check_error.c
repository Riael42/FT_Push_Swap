/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:41:35 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:18:14 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_error(void);

int	ft_check_error(int **stacks, int argc, char **argv)
{
	int	i;

	i = 0;
	if (stacks == (void *)0)
		return (ft_error());
	while (i < 4)
	{
		if (stacks[i] == (void *)0)
			return (ft_error());
		i += 1;
	}
	if (ft_check_argv(argc, argv) != 0)
		return (ft_error());
	if (ft_check_dupes(stacks) != 0)
		return (ft_error());
	return (0);
}

static int	ft_error(void)
{
	ft_putstr("Error\n");
	return (1);
}
