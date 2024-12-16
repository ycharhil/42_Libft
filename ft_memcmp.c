/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:36:10 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/04 21:15:53 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "Helloo";

    // Comparaison de str1 et str2 (identiques)
    if (ft_memcmp(str1, str2, sizeof(str1)) == 0) {
        printf("str1 et str2 sont identiques.\n");
    } else {
        printf("str1 et str2 sont différents.\n");
    }

    // Comparaison de str1 et str3 (différents)
    if (ft_memcmp(str1, str3, sizeof(str1)) == 0) {
        printf("str1 et str3 sont identiques.\n");
    } else {
        printf("str1 et str3 sont différents.\n");
    }

    // Comparaison de str1 et str4 (différents à cause de la longueur)
    if (ft_memcmp(str1, str4, sizeof(str1)) == 0) {
        printf("str1 et str4 sont identiques.\n");
    } else {
        printf("str1 et str4 sont différents.\n");
    }

    return 0;
}*/
