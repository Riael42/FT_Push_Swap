/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_gracefully.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:40:07 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:18:45 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_exit_gracefully(int **stacks)
{
	int	i;

	i = 0;
	if (stacks != (void *)0)
	{
		while (i < 4)
		{
			if (stacks[i] != (void *)0)
			{
				free(stacks[i]);
				stacks[i] = (void *)0;
			}
			i += 1;
		}
		free(stacks);
		stacks = (void *)0;
	}
}
