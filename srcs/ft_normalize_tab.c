/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:40:25 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:20:30 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_normalize_tab(int *arr, int *clone, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (j < size && k == 0)
		{
			if (clone[j] == arr[i])
			{
				arr[i] = j + 1;
				k = 1;
			}
			j += 1;
		}
		i += 1;
	}
}
