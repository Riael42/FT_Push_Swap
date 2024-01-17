/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfer_ba.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:53:09 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:25:24 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_transfer_ba(int **stacks)
{
	int	i;

	while (stacks[2][0] > 0)
	{
		ft_putstr("pa\n");
		i = stacks[3][0];
		while (i >= 1)
		{
			stacks[0][i] = stacks[0][i - 1];
			i -= 1;
		}
		stacks[3][0] += 1;
		stacks[0][0] = stacks[1][0];
		i = 0;
		while (i < stacks[2][0] - 1)
		{
			stacks[1][i] = stacks[1][i + 1];
			i += 1;
		}
		stacks[2][0] -= 1;
	}
}
