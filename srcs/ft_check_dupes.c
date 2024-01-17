/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dupes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:45:22 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:17:58 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_dupes(int **stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks[3][0] - 1)
	{
		j = i + 1;
		while (j < stacks[3][0])
		{
			if (stacks[0][i] == stacks[0][j])
				return (1);
			j += 1;
		}
		i += 1;
	}
	return (0);
}
