/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:48:42 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:23:50 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate_up(int **stacks)
{
	int	i;
	int	glass;

	write(1, "ra\n", 3);
	i = 0;
	glass = stacks[0][0];
	while (i < stacks[3][0] - 1)
	{
		stacks[0][i] = stacks[0][i + 1];
		i += 1;
	}
	stacks[0][i] = glass;
}
