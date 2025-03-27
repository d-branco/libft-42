/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:10 by abessa-m          #+#    #+#             */
/*   Updated: 2025/03/27 14:50:42 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_lstlast
//	Prototype
//		t_l_no *ft_lstlast(t_l_no *lst);
//	Turn in files
//		-
//	Parameters
//		lst: The beginning of the list.
//	Return value
//		Last node of the list
//	External functs.
//		None
//	Description
//		Returns the last node of the list.

#include "../libft.h"
//	t_l_no

t_l_no	*ft_lstlast(t_l_no *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
