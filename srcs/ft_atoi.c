/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:08:59 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:17:14 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

long	ft_atoi(char *str)
{
	int		sign;
	long	i;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(str[i], 3) == 1)
		i += 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i += 1;
	}
	return (num * sign);
}
