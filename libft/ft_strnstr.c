/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:08:11 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/30 11:00:24 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return (0);
	while (i < n && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& needle[j] && i + j < n)
			j++;
		if (!needle[j])
			return (1);
		i++;
	}
	return (0);
}
