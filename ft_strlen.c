/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:42:17 by coder             #+#    #+#             */
/*   Updated: 2023/01/03 21:25:39 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strlen is checking the length of a string.
// Return: length of a string as size_t.

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
