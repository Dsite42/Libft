/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:46:09 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/17 12:54:27 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strchr searchs the first occurance of the character
// in a string s.
// Return: A pointer to the matching character or NULL if it is not found.

char	*ft_strchr(const char *s, int c)
{
	char *cs;
	
	cs = (char*)s;
	while (*cs != '\0')
	{
		if (*cs == c)
			return (cs);
		cs++;
	}
	if (*cs == '\0' && c == '\0')
		return (cs);
	return (0);
}
