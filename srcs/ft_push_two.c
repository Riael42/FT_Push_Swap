/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:13:54 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:23:15 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_two(int **stacks)
{
	if (stacks[0][0] > stacks[0][1])
		write(1, "ra\n", 3);
	else
		ft_putstr("Nobody will ever see this\n");
}
