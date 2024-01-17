/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:18:18 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:21:08 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_four(int **stacks)
{
	int	i;
	int	min;

	min = 0;
	i = 0;
	while (i < stacks[3][0])
	{
		if (stacks[0][i] < stacks[0][min])
			min = i;
		i += 1;
	}
	if (min == 3)
		ft_rotate_down(stacks);
	else
	{
		while (min > 0)
		{
			ft_rotate_up(stacks);
			min -= 1;
		}
	}
	write(1, "pb\n", 3);
	ft_push_ab(stacks);
	ft_push_three(stacks);
	write(1, "pa\n", 3);
}
