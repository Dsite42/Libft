/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:46:09 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/16 17:04:06 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memchr scans n bytes of the memory area pointed to by prt
// for the first instance of c.
// Return: A pointer to the matching byte or NULL if the character
// does not occur in the given memory area.
#include <strings.h>

void	*ft_memchr(const void *prt, int c, size_t n)
{
	while (n > 0)
	{
		if (*(const char *)prt == c)
			return ((void *)prt);
		prt++;
		n--;
	}
	return (0);
}
