/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:59:14 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:19:12 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*ft_get_stack(int argc, char **argv, int size)
{
	int		*stack;
	long	glass;
	int		i;

	if (argc > 2)
	{
		stack = (int *)malloc(sizeof(int) * (size + 1));
		i = 0;
		while (i < size)
		{
			glass = ft_atoi(argv[i + 1]);
			if (glass > 2147483647 || glass < -2147483648)
			{
				if (stack != (void *)0)
					free(stack);
				stack = (void *)0;
				return ((void *)0);
			}
			stack[i] = (int)glass;
			i += 1;
		}
	}
	else
		stack = ft_break_argv(argv, size, -1);
	return (stack);
}
