/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:05 by abessa-m          #+#    #+#             */
/*   Updated: 2025/03/27 14:50:42 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_lstadd_front
//	Prototype
//		void ft_lstadd_front(t_l_no **lst, t_l_no *new);
//	Turn in files
//		-
//	Parameters
//		lst: The address of a pointer to the first link of a list.
//		new: The address of a pointer to the node to be added to the list.
//	Return value
//		None
//	External functs.
//		None
//	Description
//		Adds the node ’new’ at the beginning of the list.

#include "../libft.h"
//	t_l_no

void	ft_lstadd_front(t_l_no **lst, t_l_no *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
