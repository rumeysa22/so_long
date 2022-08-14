/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:52:21 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/29 13:55:25 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
void	f(void *str)
{
	printf("%s",str);
}

int main()
{
	t_list *bur = ft_lstnew("rumeysa");
	ft_lstdelone(bur, &f);
}
void    f(void *str)
 {
    printf("%s", str);
 }
 
int main()
 {
    t_list *aba = ft_lstnew("rumeysa");
    ft_lstdelone(bur,&f);
 }
 */
