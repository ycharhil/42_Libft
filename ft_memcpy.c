/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:54:27 by ycharhil          #+#    #+#             */
/*   Updated: 2024/11/28 20:52:23 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*p;

	i = 0;
	s = (unsigned char *)dest;
	p = (unsigned char *)src;
	if (dest == p || n == 0)
		return (dest);
	while (i < n)
	{
		s[i] = p[i];
		i++;
	}
	return (dest);
}
