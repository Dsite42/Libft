/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:46:09 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/16 15:53:13 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memset overwrites n bytes in the memory from the pointer
// by constant byte c. 
// Return: pointer to memory area prt.
#include <strings.h>

void	*ft_memset(void *prt, int c, size_t n)
{
	while (n > 0)
	{
		*(char *)prt = c;
		prt++;
		n--;
	}
	return (prt);
}
