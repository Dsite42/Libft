/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:08:51 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/20 17:46:10 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_putendl_fd outputs the integer ’n’ to the given file
// descriptor.
// Return: None.
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*itoa;

	itoa = ft_itoa(n);
	ft_putstr_fd(itoa, fd);
	free(itoa);
}
