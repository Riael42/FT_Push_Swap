/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:51:33 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:20:43 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_ab(int **stacks)
{
	int	i;

	i = stacks[2][0];
	while (i >= 1)
	{
		stacks[1][i] = stacks[1][i - 1];
		i -= 1;
	}
	stacks[2][0] += 1;
	stacks[1][0] = stacks[0][0];
	i = 0;
	while (i < stacks[3][0] - 1)
	{
		stacks[0][i] = stacks[0][i + 1];
		i += 1;
	}
	stacks[3][0] -= 1;
}
