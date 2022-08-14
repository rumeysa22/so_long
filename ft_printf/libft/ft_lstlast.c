/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:11:07 by rakkaya           #+#    #+#             */
/*   Updated: 2022/02/01 14:17:42 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *bab = ft_lstnew("ababa");
	t_list *saas = ft_lstnew("hdhdh");
	bab->next = saas;
	saas->next = NULL;
	t_list *son = ft_lstlast(bab);
	printf("%s", son->content);
}
*/
