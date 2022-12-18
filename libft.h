/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:13:18 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/18 12:28:01 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <strings.h>

// This function ft_atoi converts the string to an int.The string may begin with
// an arbitrary amount of white space (as determined by isspace(3)) followed
// by a single optional '+' or '-' sign.
// Return: The converted string number as int.

int	ft_atoi(char *str);

// This function bzero erases n bytes in the memory from the pointer
// by overwriting it with '\0'
// Return: None.
void	ft_bzero(void *prt, size_t n);

// This function ft_calloc allocates memory for an array of nmemb elements of
// size bytes each. The memory is set to zero.
// Return: If nmemb or size is 0, then calloc() returns NULL. If the multi-
// plication of nmemb and size would result in integer overflow, then calloc()
// returns an error. By sucsess returns a pointer to the allocated memory.
void	*ft_calloc(size_t nmemb, size_t size);

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

// This function ft_memchr scans n bytes of the memory area pointed to by prt
// for the first instance of c.
// Return: A pointer to the matching byte or NULL if the character
// does not occur in the given memory area.
void	*ft_memchr(const void *prt, int c, size_t n);

// This function ft_memcmp compares the first n bytes (each interpreted 
// as unsigned char) of the memory areas s1 and s2.
// Return: Difference between the first pair of bytes (interpreted as unsigned char) that differ in
// s1 and s2 as int. If n is zero, the return value is zero.
int	ft_memcmp(const void *s1, const void *s2, size_t n);

// This function ft_memcpy copies n bytes from memory area src to memory area dest. 
// The memory areas shall not overlap.
// Return: A pointer to the copy.
void	*ft_memcpy(void *dest, const void *src, size_t n);

// This function ft_strchr searchs the first occurance of the character
// in a string s.
// Return: A pointer to the matching character or NULL if it is not found.
char	*ft_strchr(const char *s, int c);

// This function ft_strdup duplicates a string.
// Return: A pointer to the duplicated string. It returns NULL if insufficient memory was available.
char	*ft_strdup(const char *src);


// This function ft_strrchr searchs the last occurance of the character
// in a string s.
// Return: A pointer to the matching character or NULL if it is not found.
char	*ft_strrchr(const char *s, int c);

// This function ft_strlcat copies n-1 bytes to the end of dest string 
// by 0 terminating the results. src and dest must be NUL-terminated.
// Return: The total length of the string they tried to create (initial length
// of dest plus length of src).
size_t	ft_strlcat(char *dest, char *src, size_t size);

// This function ft_strlcpy copies n-1 bytes to a dest string by 0 terminating
// the results. src must be NUL-terminated.
// Return: The total length of the string they tried to create (length of src).
size_t	ft_strlcpy(char *dest, char *src, size_t size);

// This function ft_strlen is checking the length of a string.
// Return: length of a string as int.
size_t	ft_strlen(char *str);

// This function ft_strncmp compares the first n bytes of string s1 and s2.
// Return: Difference between the first pair of bytes that differ in
// s1 and s2 as int. If n is zero, the return value is zero.
int	ft_strncmp(const char *s1, const char *s2, size_t n);

// This function ft_strnstr search for a string in another string withhin the
// first n characters.
// Return: A pointer to the start of the searched string or NULL if the string
// is not found or the srource string if to_find is emty.
char	*ft_strnstr(const char *ccstr, const char *ccto_find, size_t n);

// This function ft_tolower convert uppercase letters to lowercase.
// No locale.
// Return: 1 if yes 0 if not as int.
int	ft_tolower(int c);

// This function ft_toupper convert lowercase letters to uppercase.
// No locale.
// Return: 1 if yes 0 if not as int.
int	ft_toupper(int c);


#endif