/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:47 by jtolin            #+#    #+#             */
/*   Updated: 2024/01/11 10:53:49 by jtolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (count + size < count || count + size < size || total_size > 2147483424)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	while (total_size--)
		((char *)ptr)[total_size] = 0;
	return (ptr);
}
