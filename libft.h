/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:13:18 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/16 15:54:01 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <strings.h>

// This function bzero erases n bytes in the memory from the pointer
// by overwriting it with '\0'
// Return: None.
void	ft_bzero(void *prt, size_t n);

// This function ft_isalpha checks if the character is alphabetic (a-z && A-Z).
// No locale.
// Return: 1 if yes 0 if not as int.
int	ft_isalpha(int c);

// This function ft_isalnum checks if the character is digit (0-9)
// or alphabetic (a-z && A-Z).
// Return: 1 if yes 0 if not as int.
int	ft_isalnum(int c);

// This function ft_isascii checks if the character is an ASCII (0-127).
// Return: 1 if yes 0 if not as int.
int	ft_isascii(int c);

// This function ft_isdigit checks if the character is digit (0-9).
// Return: 1 if yes 0 if not as int.
int	ft_isdigit(int c);

// This function ft_isprint checks if the character is a printable character.
// Return: 1 if yes 0 if not as int.
int	ft_isprint(int c);

// This function ft_memset overwrites n bytes in the memory from the pointer
// by constant byte c. 
// Return: pointer to memory area prt.
void	*ft_memset(void *prt, int c, size_t n);

// This function ft_strlen is checking the length of a string.
// Return: length of a string as int.
int	ft_strlen(char *str);

// This function ft_tolower convert uppercase letters to lowercase.
// No locale.
// Return: 1 if yes 0 if not as int.
int	ft_tolower(int c);

// This function ft_toupper convert lowercase letters to uppercase.
// No locale.
// Return: 1 if yes 0 if not as int.
int	ft_toupper(int c);


#endif