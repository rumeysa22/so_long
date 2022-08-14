/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:01:16 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/01 17:06:38 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
void	f(void *str)
{
	printf("%s\n",str);
}

int main()
{
	t_list *gor = ft_lstnew("gorkem");
	t_list *abm = ft_lstnew("ahmet");
	gor->next = abm;
	abm->next = NULL;
	ft_lstiter(gor, &f);
}*/
