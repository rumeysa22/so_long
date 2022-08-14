/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:02:21 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/31 13:29:43 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*#include <stdio.h>
int main()
{
	t_list *lst = ft_lstnew("rum");
	t_list *new = ft_lsttnew("elif");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst -> content);
	printf("%s", lst -> next -> content);
}*/
