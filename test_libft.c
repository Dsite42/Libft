#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int	main(void)
{
	//ft_atoi
	char *value = "  \t\n +4582abc45";
	char *value1 = "---4582abc45";
	char *value2 = "-2147483648";
	char *value3 = "";
	
	if (ft_atoi(value) == atoi(value) && ft_atoi(value1) == atoi(value1) &&ft_atoi(value2) == atoi(value2) && ft_atoi(value3) == atoi(value3))
		printf("ft_atoi: OK!\n");
	else
		printf("ft_atoi: Fail\n");
	printf("%i | %i | %i | %i\n", ft_atoi(value), ft_atoi(value1), ft_atoi(value2), ft_atoi(value3));


	//ft_bzero
	char 	str0[] = "Smt to test";
	int		n = 2;
	int len = ft_strlen(str0);
	int		i = n;
	//char *test = malloc(256);

	ft_bzero(str0, n);
	//printf("XX: %s", str0);
	//bzero(str0, n);
	
	while(n > 0)
	{
		if (str0[n - 1] == '\0')
			i--;
		n--;
	}
	if (n == i)
		printf("ft_bzero: OK!\n");
	else
		printf("ft_bzero: Fail\n");
	
	while(len > 0)
	{
		printf("%c", str0[len - 1]);
		len--;
	}
	printf("\n");


	//ft_calloc
	char	*mem;
	n = 5;
	int		ok = 1;
	i = 0;
	
	mem = ft_calloc(n, sizeof(int));
	while (i < n)
	{
		if (mem[i] != '\0')
		{
			ok = 0;
			break;
		}
		i++;
	}
	if (ok == 1 && mem != NULL)
		printf("ft_calloc: OK!\n");
	else
		printf("ft_calloc: Fail\n");
	printf("%s  %p\n", mem, mem);


	// ft_isalpha
	unsigned char	c0 = '`';
	unsigned char	c1 = 'a';
	unsigned char	c2 = 'z';
	unsigned char	c3 = '{';
	unsigned char	c4 = '@';
	unsigned char	c5 = 'A';
	unsigned char	c6 = 'Z';
	unsigned char	c7 = '[';

	if (ft_isalpha((int)c0) == 0 && ft_isalpha((int)c1) == 1 && ft_isalpha((int)c2) == 1 && ft_isalpha((int)c3) == 0
		&& ft_isalpha((int)c4) == 0 && ft_isalpha((int)c5) == 1 && ft_isalpha((int)c6) == 1 && ft_isalpha((int)c7) == 0)
		printf("ft_isalpha: OK!\n");
	else
		printf("ft_isalpha: Fail\n");
	printf("%i%i%i%i%i%i%i%i\n", ft_isalpha((int)c0), ft_isalpha((int)c1), ft_isalpha((int)c2),
		ft_isalpha((int)c3), ft_isalpha((int)c4), ft_isalpha((int)c5), ft_isalpha((int)c6),
		ft_isalpha((int)c7));


	// ft_isalnum
	c0 = '/';
	c1 = '0';
	c2 = '9';
	c3 = ':';
	c4 = '`';
	c5 = 'a';
	c6 = 'z';
	c7 = '{';
	unsigned char	c8 = '@';
	unsigned char	c9 = 'A';
	unsigned char	c10 = 'Z';
	unsigned char	c11 = '[';
	
	if (ft_isalnum((int)c0) == 0 && ft_isalnum((int)c1) == 1 && ft_isalnum((int)c2) == 1 && ft_isalnum((int)c3) == 0
		&& ft_isalnum((int)c4) == 0 && ft_isalnum((int)c5) == 1 && ft_isalnum((int)c6) == 1 && ft_isalnum((int)c7) == 0
		 && ft_isalnum((int)c8) == 0 && ft_isalnum((int)c9) == 1 && ft_isalnum((int)c10) == 1 && ft_isalnum((int)c11) == 0)
		printf("ft_isalnum: OK!\n");
	else
		printf("ft_isalnum: Fail\n");
	printf("%i%i%i%i%i%i%i%i%i%i%i%i\n", ft_isalnum((int)c0), ft_isalnum((int)c1), ft_isalnum((int)c2),
		ft_isalnum((int)c3), ft_isalnum((int)c4), ft_isalnum((int)c5), ft_isalnum((int)c6),
		ft_isalnum((int)c7), ft_isalnum((int)c8), ft_isalnum((int)c9), ft_isalnum((int)c10),
		ft_isalnum((int)c11));


	//ft_isascii
	if (ft_isascii(-1) == 0 && ft_isascii(0) == 1 && ft_isascii(127) == 1 && ft_isascii(128) == 0)
		printf("ft_isascii: OK!\n");
	else
		printf("ft_isascii: Fail\n");
	printf("%i %i %i %i\n", ft_isascii(-1), ft_isascii(0), ft_isascii(127), ft_isascii(128));


	//ft_isdigit
	c0 = '/';
	c1 = '0';
	c2 = '9';
	c3 = ':';

	if (ft_isdigit((int)c0) == 0 && ft_isdigit((int)c1) == 1 && ft_isdigit((int)c2) == 1 && ft_isdigit((int)c3) == 0)
		printf("ft_isdigit: OK!\n");
	else
		printf("ft_isdigit: Fail\n");
	printf("%i %i %i %i\n", ft_isdigit((int)c0), ft_isdigit((int)c1), ft_isdigit((int)c2), ft_isdigit((int)c3));


	//ft_isprint
	c0 = ' ';
	c1 = '?';
	c2 = '~';
	//c3 = 'DEL';

	if (ft_isprint((int)c0) == 1 && ft_isprint((int)c1) == 1 && ft_isprint((int)c2) == 1 && ft_isprint(127) == 0)
		printf("ft_isprint: OK!\n");
	else
		printf("ft_isprint: Fail\n");
	printf("%i %i %i %i\n", ft_isprint((int)c0), ft_isprint((int)c1), ft_isprint((int)c2), ft_isprint(127));


	//ft_itoa
	int	n3 = 2147483647;
	char cn3[] = "2147483647";
	int	n4 = -2147483648;
	char cn4[] = "-2147483648";
	int	n5 = 0;
	char cn5[] = "0";
	
	if (ft_strncmp(ft_itoa(n3), cn3, 10) == 0 && ft_strncmp(ft_itoa(n4), cn4, 11) == 0 && ft_strncmp(ft_itoa(n5), cn5, 1) == 0)
		printf("ft_itoa: OK!\n");
	else
		printf("ft_itoa: Fail\n");
	printf("%s | %s | %s\n", ft_itoa(n3), ft_itoa(n4), ft_itoa(n5));


	//ft_memchr
	char	str01[] = "Smt tX test";
	n = 11;
	int c12 = 88;
	
	if (ft_memchr(str01, c12, n) == memchr(str01, c12, n))
		printf("ft_memchr: OK!\n");
	else
		printf("ft_memchr: Fail\n");
	printf("%p|%p\n", ft_memchr(str01, c12, n), memchr(str01, c12, n));


	//ft_memcmp
	char	str02[] = "Smt tX test";
	char	str03[] = "Smt t€ test";
	n = 11;
	
	if (ft_memcmp(str02, str03, n) == memcmp(str02, str03, n))
		printf("ft_memcmp: OK!\n");
	else
		printf("ft_memcmp: Fail\n");
	printf("%i|%i\n", ft_memcmp(str02, str03, n), memcmp(str02, str03, n));


	//ft_memcpy
	char	str04[] = "Smt tX test";
	char	str05[] = "XXXXXXXXXXX";
	int 	fail;
	n = 3;
	i = 0;
	fail = 0;
	ft_memcpy(str05, str04, n);
	while (i < n)
	{
		if (str05[i] != str04[i])
		{
			fail = 1;
			break;
		}
		i++;
	}
	if (fail == 0)
		printf("ft_memcpy: OK!\n");
	else
		printf("ft_memcpy: Fail\n");
	write(1, str05, 11);
	write(1, "\n", 1);


	//ft_memmove
	char	str14[] = "Hallo";
	char	*str15;
	size_t	n6 = 5;

	str15 = &str14[3];
	ft_memmove(str15, str14, n6);
	if (str14[3] == 'H' && str15[4] == 'o')
		printf("ft_memmove: OK!\n");
	else
		printf("ft_memmove: Fail\n");
	printf("1:%p %s 2:%p %s\n", str14, str14, str15, str15);


	//ft_memset
	char	str00[] = "Smt to test";
	n = 2;
	len = ft_strlen(str00);
	int		c = 88;
	i = n;
	//char *test = malloc(256);

	ft_memset(str00, c, n);
	//printf("XX: %s", str0);
	//bzero(str0, n);
	
	while(n > 0)
	{
		if (str00[n - 1] == c)
			i--;
		n--;
	}
	if (n == i)
		printf("ft_memset: OK!\n");
	else
		printf("ft_memset: Fail\n");
	
	while(len > 0)
	{
		printf("%c", str00[len - 1]);
		len--;
	}
	printf("\n");


	//ft_putchar_fd
	int		fd;
	char	buf;
	
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	ft_putchar_fd('X', fd);
	close(fd);
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	read(fd, &buf, 1);
	close(fd);
	remove("/home/chris/Core/Libft/test.txt");
	if (buf == 'X')
		printf("ft_putchar_fd: OK!\n");
	else
		printf("ft_putchar_fd: Fail\n");
	printf("%c\n", buf);


	//ft_putnbr_fd
	int	s3 = 1234;
	char	buf3[10];
	char	*cmp = "1234";
	
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	ft_putnbr_fd(s3, fd);
	close(fd);
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	read(fd, &buf3, 4);
	close(fd);
	remove("/home/chris/Core/Libft/test.txt");
	if (ft_strncmp(cmp, buf3, 4) == 0)
		printf("ft_putnbr_fd: OK!\n");
	else
		printf("ft_putnbr_fd: Fail\n");
	printf("%i | %s\n", s3, buf3);


	//ft_putendl_fd
	char	s2[] = "Hallo";
	char	buf2[10];
	
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	ft_putendl_fd(s2, fd);
	close(fd);
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	read(fd, &buf2, 6);
	close(fd);
	remove("/home/chris/Core/Libft/test.txt");
	if (ft_strncmp(s2, buf2, 5) == 0)
		printf("ft_putendl_fd: OK!\n");
	else
		printf("ft_putendl_fd: Fail\n");
	printf("%s | %s\n", s2, buf2);


	//ft_putstr_fd
	char	s[] = "Hallo";
	char	buf1[10];
	
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	ft_putstr_fd(s, fd);
	close(fd);
	fd = open("/home/chris/Core/Libft/test.txt", O_RDWR | O_CREAT, 0666);
	read(fd, &buf1, 5);
	close(fd);
	remove("/home/chris/Core/Libft/test.txt");
	if (ft_strncmp(s, buf1, 5) == 0)
		printf("ft_putstr_fd: OK!\n");
	else
		printf("ft_putstr_fd: Fail\n");
	printf("%s | %s\n", s, buf1);


	//ft_split
	char str13[] = ",Te,s,t,";
	char sep1 = ',';
	char	**res2;
	
	res2 = ft_split(str13, sep1);
	if (res2 != NULL && *res2[0] == '\0' && *res2[1] == 'T' && *res2[2] == 's' && *res2[3] == 't' && *res2[4] == '\0')
		printf("ft_split: OK!\n");
	else
		printf("ft_split: Fail\n");
	printf("%s | %s | %s | %s | %s | %s\n", res2[0], res2[1], res2[2], res2[3], res2[4], res2[5]);


	//ft_strchr
	char	str08[] = "Smt tX test";
	c = '\0';
	c2 = 'X';
	
	if (ft_strchr(str08, c) == strchr(str08, c) && ft_strchr(str08, c2) == strchr(str08, c2))
		printf("ft_strchr: OK!\n");
	else
		printf("ft_strchr: Fail\n");
	printf("%p|%p   %p|%p\n", ft_strchr(str08, c), strchr(str08, c), ft_strchr(str08, c2), strchr(str08, c2));


	//ft_strrchr
	char	str09[] = "Smt tX test";
	c = '\0';
	c2 = 'X';
	
	if (ft_strrchr(str09, c) == strrchr(str09, c) && ft_strrchr(str09, c2) == strrchr(str09, c2))
		printf("ft_strrchr: OK!\n");
	else
		printf("ft_strrchr: Fail\n");
	printf("%p|%p   %p|%p\n", ft_strrchr(str09, c), strrchr(str09, c), ft_strrchr(str09, c2), strrchr(str09, c2));


	//ft_strdup
	char src2[] = "Hello";
	
	if (*ft_strdup(src2) == src2[0] && ft_strdup(src2) != src2)
		printf("ft_strdup: OK!\n");
	else
		printf("ft_strdup: Fail\n");
	printf("%s  %p|%p\n", ft_strdup(src2), ft_strdup(src2), src2);


	//ft_strjoin
	char	a[] = "Hello";
	char	b[] = "World";
	char	*joined;

	joined = ft_strjoin(a, b);
	if (joined != NULL && joined[0] == 'H' && joined[9] == 'd')
		printf("ft_strjoin: OK!\n");
	else
		printf("ft_strjoin: Fail\n");
	printf("%s\n", joined);


	//ft_strlcat
	char 			src[] = "sdfggg";
	char 			dest[10] = "a";
	unsigned int	size;
	
	size = 4;
	ft_strlcat(dest, src, size);
	if (dest[0] == 'a' && dest[1] == 's' && dest[2] == 'd' && dest[3] == '\0')
		printf("ft_strlcat: OK!\n");
	else
		printf("ft_strlcat: Fail\n");
	printf("%s\n", dest);


	//ft_strlcpy
	char 			src1[] = "sdfggg";
	char 			dest1[10] = "a";
	
	size = 3;
	ft_strlcpy(dest1, src1, size);
	if (dest1[0] == 's' && dest1[1] == 'd' && dest1[2] == '\0')
		printf("ft_strlcpy: OK!\n");
	else
		printf("ft_strlcpy: Fail\n");
	printf("%s\n", dest1);


	//ft_strlen
	char *str3 = "Smt to test";
	char *str1 = "";
	char *str2 = "Smt \0";

	if (ft_strlen(str3) == 11 && ft_strlen(str1) == 0 && ft_strlen(str2) == 4)
		printf("ft_strlen: OK!\n");
	else
		printf("ft_strlen: Fail\n");
	printf("%zu %zu %zu\n", ft_strlen(str3), ft_strlen(str1), ft_strlen(str2));


	//ft_strncmp
	char	str06[] = "Smt tX test";
	char	str07[] = "Smt t€ test";
	n = 11;
	
	if (ft_strncmp(str06, str07, n) == strncmp(str06, str07, n))
		printf("ft_strncmp: OK!\n");
	else
		printf("ft_strncmp: Fail\n");
	printf("%i|%i\n", ft_strncmp(str06, str07, n), strncmp(str06, str07, n));


	//ft_strnstr
	char	str10[] = "Smt tX test";
	char	str11[] = "tX";
	char	str12[] = "";
	n = 5;
	int	n2 = 7;
	
	if ((ft_strnstr(str10, str11, n) == NULL) && (*ft_strnstr(str10, str11, n2) == str10[4]) && (*ft_strnstr(str10, str12, n2) == str10[0]))
		printf("ft_strnstr: OK!\n");
	else
		printf("ft_strnstr: Fail\n");
	printf("%s  %s  %s\n", ft_strnstr(str10, str11, n), ft_strnstr(str10, str11, n2), ft_strnstr(str10, str12, n));


	//ft_strtrim
	char 			src3[] = "12s-dfg?";
	char 			set1[] = "12-?";
	char	*trim;

	trim = ft_strtrim(src3, set1);
	if (trim != NULL && trim[0] == 's' && trim[4] == 'g')
		printf("ft_strtrim: OK!\n");
	else
		printf("ft_strtrim: Fail\n");
	printf("%s\n", trim);


	//ft_substr
	char	a1[] = "HelloWorld";
	char	*sub;
	sub = ft_substr(a1, 5, 5);
	if (sub != NULL && sub[0] == 'W' && sub[4] == 'd')
		printf("ft_substr: OK!\n");
	else
		printf("ft_substr: Fail\n");
	printf("%s\n", sub);


	//ft_tolower
	c0 = '@';
	c1 = 'A';
	c2 = 'Z';
	c3 = '[';

	if (ft_tolower((int)c0) == tolower((int)c0) && ft_tolower((int)c1) == tolower((int)c1)
		&& ft_tolower((int)c2) == tolower((int)c2) && ft_tolower((int)c3) == tolower((int)c3))
		printf("ft_tolower: OK!\n");
	else
		printf("ft_tolower: Fail\n");
	printf("%c %c %c %c\n", ft_tolower((int)c0), ft_tolower((int)c1), ft_tolower((int)c2), ft_tolower((int)c3));


	//ft_toupper
	c0 = '`';
	c1 = 'a';
	c2 = 'z';
	c3 = '{';

	if (ft_toupper((int)c0) == toupper((int)c0) && ft_toupper((int)c1) == toupper((int)c1)
		&& ft_toupper((int)c2) == toupper((int)c2) && ft_toupper((int)c3) == toupper((int)c3))
		printf("ft_toupper: OK!\n");
	else
		printf("ft_toupper: Fail\n");
	printf("%c %c %c %c\n", ft_toupper((int)c0), ft_toupper((int)c1), ft_toupper((int)c2), ft_toupper((int)c3));

}


