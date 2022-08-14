/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:42:40 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/29 11:51:23 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*liste;

	liste = (t_list *)malloc(sizeof(t_list));
	if (!liste)
		return (NULL);
	liste -> content = content;
	liste -> next = NULL;
	return (liste);
}
/*
#include <stdio.h>
int main()
{
	t_list *test;
	test = ft_lstnew("hahaha");
	printf("ici: %s", test->content);
}*/
