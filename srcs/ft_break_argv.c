/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:01:41 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:17:30 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	*ft_get_result(char *s, int *ret, int i);
static int	*ft_invalid(int *ret);

int	*ft_break_argv(char **argv, int size, int i)
{
	int		*ret;
	char	s[22];
	int		j;
	int		k;

	ret = (int *)malloc(sizeof(int) * (size + 1));
	while (++i < size && ret != (void *)0)
	{
		k = 0;
		j = ft_skip_word(argv[1], i);
		while (argv[1][j] != ' ' && argv[1][j] != '\0')
		{
			s[k] = (char)argv[1][j];
			j += 1;
			k += 1;
			if (k > 20)
				return (ft_invalid(ret));
		}
		s[k] = '\0';
		if (ret != (void *)0)
			ret = ft_get_result(s, ret, i);
	}
	return (ret);
}

static int	*ft_invalid(int *ret)
{
	if (ret != (void *)0)
		free(ret);
	return ((void *)0);
}

static int	*ft_get_result(char *s, int *ret, int i)
{
	long	glass;

	glass = ft_atoi(s);
	if (ret != (void *)0)
	{
		if (glass > 2147483647 || glass < -2147483648)
		{
			if (ret != (void *)0)
				free(ret);
			return ((void *)0);
		}
		else
			ret[i] = (int)glass;
	}
	return (ret);
}
