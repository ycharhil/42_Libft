/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:19:36 by ycharhil          #+#    #+#             */
/*   Updated: 2024/11/15 16:13:00 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d == s || n == 0)
	{
		return (dest);
	}
	if (d < s || d >= s + n)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		d = d + n;
		s = s + n;
		i = 0;
		while (i < n)
		{
			*(--d) = *(--s);
			i++;
		}
	}
	return (dest);
}
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
