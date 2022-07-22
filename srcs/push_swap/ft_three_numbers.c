/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:13:19 by lperrin           #+#    #+#             */
/*   Updated: 2022/07/20 10:41:53 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_sort_three_numbers(t_vector *stack_a)
{
	int	*tmp;

	tmp = stack_a->vector;
	if (ft_issorted(stack_a))
		return ;
	if (tmp[0] > tmp[1] && tmp[0] < tmp[2] && tmp[1] < tmp[2])
		ft_swap_a_or_b(stack_a, YES, 'a');
	else if (tmp[0] > tmp[1] && tmp[1] > tmp[2])
	{
		ft_swap_a_or_b(stack_a, YES, 'a');
		ft_reverse_rotate_a(stack_a, YES);
	}
	else if (tmp[0] > tmp[1] && tmp[0] > tmp[2] && tmp[1] < tmp[2])
		ft_rotate_a(stack_a, YES);
	else if (tmp[0] < tmp[1] && tmp[1] > tmp[2] && tmp[0] < tmp[2])
	{
		ft_swap_a_or_b(stack_a, YES, 'a');
		ft_rotate_a(stack_a, YES);
	}
	else if (tmp[0] < tmp[1] && tmp[1] > tmp[2] && tmp[0] > tmp[2])
		ft_reverse_rotate_a(stack_a, YES);
}
