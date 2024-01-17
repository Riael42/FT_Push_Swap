/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfer_ab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:44:04 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:25:12 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_transfer_ab(int **stacks, int curr)
{
	int	i;
	int	j;

	j = 0;
	i = stacks[3][0];
	while (j < i)
	{
		if (((stacks[0][0] >> curr) & 1) == 1)
			ft_rotate_up(stacks);
		else
		{
			write(1, "pb\n", 3);
			ft_push_ab(stacks);
		}
		j += 1;
	}
}
