/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:37:12 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:16:57 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*ft_arr_dup(int *arr, int size)
{
	int	*ret;
	int	i;

	ret = (int *)malloc(sizeof(int) * (size + 1));
	if (ret == (void *)0)
		return ((void *)0);
	i = 0;
	while (i < size)
	{
		ret[i] = arr[i];
		i += 1;
	}
	return (ret);
}
