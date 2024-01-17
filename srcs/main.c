/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:37:12 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:25:35 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	**stacks;
	int	size;
	int	err;

	size = ft_get_size(argc, argv);
	if (size <= 1)
		return (42);
	stacks = ft_init_stacks(argc, argv, size);
	err = ft_check_error(stacks, argc, argv);
	if (err != 0)
	{
		ft_exit_gracefully(stacks);
		return (42);
	}
	if (ft_is_sorted(stacks[0], stacks[3][0]) == 1)
	{
		ft_exit_gracefully(stacks);
		return (0);
	}
	ft_start_ps(stacks);
	ft_exit_gracefully(stacks);
	return (0);
}
