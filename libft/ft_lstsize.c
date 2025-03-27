/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:14:30 by abessa-m          #+#    #+#             */
/*   Updated: 2025/03/27 14:50:42 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_lstsize
//	Prototype
//		int ft_lstsize(t_l_no *lst);
//	Turn in files
//		-
//	Parameters
//		lst: The beginning of the list.
//	Return value
//		The length of the list
//	External functs.
//		None
//	Description
//		Counts the number of nodes in a list.

#include "../libft.h"
//	t_l_no

int	ft_lstsize(t_l_no *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
