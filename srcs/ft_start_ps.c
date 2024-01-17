/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_ps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:30:59 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:24:39 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_start_ps(int **stacks)
{
	ft_normalize(stacks[0], stacks[3][0], stacks);
	if (stacks[3][0] == 0)
		return (ft_exit_gracefully(stacks));
	if (stacks[3][0] == 2)
		ft_push_two(stacks);
	if (stacks[3][0] == 3)
		ft_push_three(stacks);
	if (stacks[3][0] == 4)
		ft_push_four(stacks);
	if (stacks[3][0] == 5)
		ft_push_five(stacks);
	if (stacks[3][0] > 5)
		ft_push_swap(stacks, 0);
}
