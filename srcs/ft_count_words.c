/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:52:01 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:18:30 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_skip_start(char *str, char c);
static int	ft_cut_end(char *str, char c);

int	ft_count_words(char *str, char c)
{
	int	i;
	int	l;
	int	wc;

	if (!str || str[0] == '\0')
		return (0);
	i = ft_skip_start(str, c);
	if (str[i] == '\0')
		return (0);
	l = ft_cut_end(str, c);
	wc = 1;
	while (i < l)
	{
		while (str[i] != c && i < l)
			i += 1;
		if (str[i] != '\0' && i < l)
			wc += 1;
		while (str[i] == c && i < l)
			i += 1;
	}
	return (wc);
}

static int	ft_cut_end(char *str, char c)
{
	int	l;

	l = ft_strlen(str);
	l -= 1;
	while (str[l] == c)
		l -= 1;
	return (l);
}

static int	ft_skip_start(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] == c)
		i += 1;
	return (i);
}
