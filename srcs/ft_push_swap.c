/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:00 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:22:26 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_swap(int **stacks, int curr)
{
	if (curr == stacks[3][1])
		return ;
	ft_transfer_ab(stacks, curr);
	ft_transfer_ba(stacks);
	ft_push_swap(stacks, curr + 1);
}
