/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:56:50 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:23:39 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate_down(int	**stacks)
{
	int	i;
	int	glass;

	write(1, "rra\n", 4);
	i = stacks[3][0];
	glass = stacks[0][i];
	while (i > 0)
	{
		stacks[0][i] = stacks[0][i - 1];
		i -= 1;
	}
	stacks[0][0] = glass;
}
