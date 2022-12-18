/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:46:09 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/18 11:25:05 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_bzero erases n bytes in the memory from the pointer
// by overwriting it with '\0'
// Return: None.
#include <strings.h>

void	ft_bzero(void *prt, size_t n)
{
	while (n > 0)
	{
		*(char *)prt = '\0';
		prt++;
		n--;
	}
}
