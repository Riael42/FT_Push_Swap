/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:57:12 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:19:28 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	**ft_init_stacks(int argc, char **argv, int size)
{
	int	**ret;

	ret = (int **)malloc(sizeof(int *) * 4);
	if (ret != (void *)0)
	{
		ret[3] = (int *)malloc(sizeof(int) * 4);
		ret[2] = (int *)malloc(sizeof(int) * 4);
		if (ret[3] != (void *)0 && ret[2] != (void *)0)
		{
			ret[3][0] = size;
			ret[2][0] = 0;
			ret[0] = ft_get_stack(argc, argv, size);
			ret[1] = ft_get_stack(argc, argv, size);
		}
	}
	return (ret);
}
