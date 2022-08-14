/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:43:00 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/29 12:00:04 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	r;

	r = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		r++;
	}
	return (r);
}

/*int main(void)
{
	t_list *first;
	t_list *second;
	t_list *third;
	first = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));
	first->content = "test";
	first->next = second;
	second->content = "test2";
	second->next = third;
	third->content = "test3";
	third->next = NULL;
	int size = ft_lstsize(first);
	printf("size: %d", size);
}*/
/*
 int  main(void)
 {
    t_list *first = ftlstnew("rumeysa");
    t_list *second = ft_lstnew("akkaya");
    t_list *third = ft_lstnew("ada");
    frirst->next = second;
    second->next = third;
    third-> next = NULL;
    printf("%d", ft_lstsize(first));
 }
 */
