/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakkaya <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:23:53 by rakkaya           #+#    #+#             */
/*   Updated: 2022/01/31 13:31:38 by rakkaya          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list *lst = ft_lstnew("rumeysa");
    t_list *new = ft_lstnew("elif");
    ft_lstadd_front(&lst, new);
    printf("%s\n", lst -> content);
	printf("%s", lst -> next -> content);
}*/
