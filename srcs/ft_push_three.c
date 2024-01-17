/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:15:14 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:22:39 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_three(int **stacks)
{
	int	i;
	int	max;

	max = 0;
	i = 0;
	while (i < stacks[3][0])
	{
		if (stacks[0][i] > stacks[0][max])
			max = i;
		i += 1;
	}
	if (max == 0)
		ft_rotate_up(stacks);
	else if (max == 1)
	{
		max = stacks[0][2];
		stacks[0][2] = stacks[0][1];
		stacks [0][1] = stacks[0][0];
		stacks [0][0] = max;
		write(1, "rra\n", 4);
	}
	if (stacks[0][0] > stacks[0][1])
		write(1, "sa\n", 3);
}
