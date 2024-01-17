/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:38:38 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:24:27 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	glass;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			glass = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = glass;
			i = 0;
		}
		else
			i += 1;
	}
}
