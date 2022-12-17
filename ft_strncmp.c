/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:13:11 by coder             #+#    #+#             */
/*   Updated: 2022/12/17 11:23:43 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strncmp compares the first n bytes of string s1 and s2.
// Return: Difference between the first pair of bytes that differ in
// s1 and s2 as int. If n is zero, the return value is zero.
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff_val;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			diff_val = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (diff_val);
		}
		i++;
	}
	return (0);
}
