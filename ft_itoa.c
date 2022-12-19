/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:26:54 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/19 10:24:35 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_itoa converts an int to a string.
// Return: The string representing the integer. NULL if the allocation fails.

#include <stdlib.h>
#include "libft.h"

static int	ft_exp(int base, int exp)
{
	int	i;
	int	result;

	if (exp == 0)
		return (1);
	i = 1;
	result = base;
	while (i < exp)
	{
		result = result * base;
		i++;
	}
	return (result);
}

static int	c_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	put_to_str(int n, char **s, int digits, int min)
{
	int	i;
	int	exp;

	i = 0;
	while (i < digits)
	{
		if (n < 10)
			**s = n + '0';
		else
		{
			exp = ft_exp(10, digits - 1 - i);
			**s = (n / exp) + '0';
			n = n - ((n / exp) * exp);
			if (min == 2)
			{
				n = n + 1;
				min = 0;
			}
		}
		i++;
		*s = *s + 1;
	}
}

static int	isneg(int *n)
{
	int	min;

	min = 0;
	if (*n < 0)
	{
		min = 1;
		if (*n == -2147483648)
		{
			*n = *n + 1;
			min = 2;
		}
		*n = -*n;
	}
	return (min);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	min;
	int		digits;
	char	*sstart;
	int		i;

	i = 0;
	min = isneg(&n);
	digits = c_digits(n);
	s = (char *)malloc((digits + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	sstart = s;
	if (min > 0)
	{
		*s = '-';
		s++;
	}
	put_to_str(n, &s, digits, min);
	*s = '\0';
	return (sstart);
}
