/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:11:45 by kpesonen          #+#    #+#             */
/*   Updated: 2020/01/17 19:55:47 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_map(char **map, int size)
{


}

char	**create_map(int size)
{
	int i;

	
}

int		count_pieces(t_piece *list)
{
	t_piece	*tmp;
	int		count;

	count = 0;
	tmp = list;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

int		start_size(t_piece *list)
{
	int		size;
	int		blocks;	

	size = 2;
	blocks = count_pieces(list) * 4;
	while (blocks > (size * size))
		size++;
	return (size);
}
