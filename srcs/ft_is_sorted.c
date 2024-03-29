/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:05:14 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:19:52 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	if (arr != (void *)0)
	{
		while (i < size -1)
		{
			if (arr[i + 1] < arr[i])
				return (0);
			i += 1;
		}
	}
	return (1);
}
