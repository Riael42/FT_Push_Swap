/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:35:06 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:20:17 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_normalize(int *arr, int size, int **stacks)
{
	int	*clone;
	int	i;

	clone = ft_arr_dup(arr, size);
	if (clone == (void *)0)
	{
		ft_putstr("Error normalizing\n");
		size = 0;
		return ;
	}
	ft_sort_int_tab(clone, size);
	stacks[3][1] = size;
	i = 0;
	while ((stacks[3][1] >> i) != 0)
		i += 1;
	stacks[3][1] = i;
	ft_normalize_tab(arr, clone, size);
	free(clone);
}
