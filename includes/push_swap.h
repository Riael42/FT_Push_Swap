/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:56:55 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:15:59 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

void	ft_transfer_ba(int **stacks);
void	ft_transfer_ab(int **stacks, int curr);
void	ft_start_ps(int **stacks);
void	ft_sort_int_tab(int *tab, int size);
int		ft_skip_word(char *s, int curr);
void	ft_rotate_up(int **stacks);
void	ft_putstr(char *str);
void	ft_push_swap(int **stacks, int curr);
void	ft_push_ab(int **stacks);
void	ft_normalize_tab(int *arr, int *clone, int size);
void	ft_normalize(int *arr, int size, int **stacks);
int		**ft_init_stacks(int argc, char **argv, int size);
int		*ft_get_stack(int argc, char **argv, int size);
int		ft_get_size(int argc, char **argv);
void	ft_exit_gracefully(int **stacks);
int		ft_count_words(char *str, char c);
int		ft_check_error(int **stacks, int argc, char **argv);
int		ft_check_argv(int argc, char **argv);
int		*ft_break_argv(char **argv, int size, int i);
long	ft_atoi(char *str);
int		*ft_arr_dup(int *arr, int size);
void	ft_putstr(char *str);
int		ft_strlen(char *s);
int		ft_isspace(char c, int type);
int		ft_is_chars(char c, char *charset);
int		ft_is_sorted(int *arr, int size);
int		ft_check_dupes(int **stacks);
void	ft_push_two(int **stacks);
void	ft_push_three(int **stacks);
void	ft_push_four(int **stacks);
void	ft_push_five(int **stacks);
void	ft_rotate_down(int	**stacks);

#endif
