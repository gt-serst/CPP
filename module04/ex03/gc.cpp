/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:13:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 17:29:05 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

static void	ft_lstclear(Node** gc)
{
	Node*	current;
	Node*	next;

	if (!gc)
		return ;
	current = *gc;
	while (current != NULL)
	{
		next = current->next;
		delete current;
		delete current->value;
		current = next;
	}
	*gc = NULL;
}

static Node*	ft_lstnew(AMateria* m)
{
	Node* new_node = new Node;

	if (!m)
		return (NULL);
	new_node->value = m;
	new_node->next = NULL;
	return (new_node);
}

static void	ft_lstadd_back(Node** gc, Node* elem)
{
	Node* tmp = *gc;

	if (!elem)
		return;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = &*elem;
	}
	else
		*gc = elem;
}

void	*ft_gc(AMateria* m, bool clean)
{
	static Node*	gc;

	if (clean)
	{
		ft_lstclear(&gc);
		return (NULL);
	}
	else
	{
		ft_lstadd_back(&gc, ft_lstnew(m));
		return (m);
	}
}
