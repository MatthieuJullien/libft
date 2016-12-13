/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:20:20 by majullie          #+#    #+#             */
/*   Updated: 2016/11/25 14:42:53 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
//#include <bsd/string.h>
#include <unistd.h>
#include "../libft.h"

#define MIN -256
#define MAX 256

#define OK(test) { printf("%s: \033[32mSUCCESS\033[0m\n", #test); return ; }
#define KO(test) { printf("%s: \033[31mFAIL: file %s, line %i\033[0m\n", \
	#test, __FILE__, __LINE__); return ; }

void	test_ft_isalpha(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isalpha(c) != 0 && ft_isalpha(c) == 0)
			KO(ft_isdigit)
		if (isalpha(c) == 0 && ft_isalpha(c) != 0)
			KO(ft_isalpha)
		c++;
	}
	OK(ft_isalpha)
}

void	test_ft_isdigit(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isdigit(c) != 0 && ft_isdigit(c) == 0)
			KO(ft_isdigit)
		if (isdigit(c) == 0 && ft_isdigit(c) != 0)
			KO(ft_isdigit)
		c++;
	}
	OK(ft_isdigit)
}

void	test_ft_isalnum(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isalnum(c) != 0 && ft_isalnum(c) == 0)
			KO(ft_isalnum)
		if (isalnum(c) == 0 && ft_isalnum(c) != 0)
			KO(ft_isalnum)
		c++;
	}
	OK(ft_isalnum)
}

void	test_ft_isascii(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isascii(c) != 0 && ft_isascii(c) == 0)
			KO(ft_isascii)
		if (isascii(c) == 0 && ft_isascii(c) != 0)
			KO(ft_isascii)
		c++;
	}
	OK(ft_isascii)
}

void	test_ft_isprint(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isprint(c) != 0 && ft_isprint(c) == 0)
			KO(ft_isprint)
		if (isprint(c) == 0 && ft_isprint(c) != 0)
			KO(ft_isprint)
		c++;
	}
	OK(ft_isprint)
}

void	test_ft_islower(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (islower(c) != 0 && ft_islower(c) == 0)
			KO(ft_islower)
		if (islower(c) == 0 && ft_islower(c) != 0)
			KO(ft_islower)
		c++;
	}
	OK(ft_islower)
}

void	test_ft_isupper(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isupper(c) != 0 && ft_isupper(c) == 0)
			KO(ft_isupper)
		if (isupper(c) == 0 && ft_isupper(c) != 0)
			KO(ft_isupper)
		c++;
	}
	OK(ft_isupper)
}

void	test_ft_isblank(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isblank(c) != 0 && ft_isblank(c) == 0)
			KO(ft_isblank)
		if (isblank(c) == 0 && ft_isblank(c) != 0)
			KO(ft_isblank)
		c++;
	}
	OK(ft_isblank)
}

void	test_ft_iscntrl(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (iscntrl(c) != 0 && ft_iscntrl(c) == 0)
			KO(ft_iscntrl)
		if (iscntrl(c) == 0 && ft_iscntrl(c) != 0)
			KO(ft_iscntrl)
		c++;
	}
	OK(ft_iscntrl)
}

void	test_ft_isgraph(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isgraph(c) != 0 && ft_isgraph(c) == 0)
			KO(ft_isgraph)
		if (isgraph(c) == 0 && ft_isgraph(c) != 0)
			KO(ft_isgraph)
		c++;
	}
	OK(ft_isgraph)
}

void	test_ft_ispunct(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (ispunct(c) != 0 && ft_ispunct(c) == 0)
			KO(ft_ispunct)
		if (ispunct(c) == 0 && ft_ispunct(c) != 0)
			KO(ft_ispunct)
		c++;
	}
	OK(ft_ispunct)
}

void	test_ft_isspace(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isspace(c) != 0 && ft_isspace(c) == 0)
			KO(ft_is)
		if (isspace(c) == 0 && ft_isspace(c) != 0)
			KO(ft_isspace)
		c++;
	}
	OK(ft_isspace)
}

void	test_ft_isxdigit(void)
{
	int c = MIN;
	while (c < MAX)
	{
		if (isxdigit(c) != 0 && ft_isxdigit(c) == 0)
			KO(ft_isxdigit)
		if (isxdigit(c) == 0 && ft_isxdigit(c) != 0)
			KO(ft_isxdigit)
		c++;
	}
	OK(ft_isxdigit)
}
void	test_ft_memset(void)
{
	ft_memset(NULL, 'x', 5);
	void	*s1 = malloc(sizeof(char) * 5);
	void	*s2 = malloc(sizeof(char) * 5);
	ft_memset(s1, 'x', 5);
	memset(s2, 'x', 5);
	if (memcmp(s1, s2, 5) != 0)
		KO(ft_memset)
	else
		OK(ft_memset)
}

void	test_ft_bzero(void)
{
	ft_bzero(NULL, 5);
	void	*s1 = malloc(sizeof(char) * 5);
	void	*s2 = malloc(sizeof(char) * 5);
	ft_bzero(s1, 5);
	bzero(s2, 5);
	if (memcmp(s1, s2, 5) != 0)
		KO(ft_bzero)
	else
		OK(ft_bzero)
}

void	test_ft_memcpy(void)
{
	ft_memcpy(NULL, NULL, 8);
	char	s1[8] = "bonjour";
	char	s2[8];
	ft_memcpy(NULL, s1, 8);
	ft_memcpy(s2, NULL, 8);
	ft_memcpy(s2, s1, 8);
	if (strcmp(s1, s2) != 0)
		KO(ft_memcpy)
	else
		OK(ft_memcpy)
}

/*
 *  memccpy copie le char c puis s'arrete
 */
void	test_ft_memccpy(void)
{
	ft_memccpy(NULL, NULL, 'x', 8);
	char	s1[8] = "bonjour" ;
	char	*s2;
	char	*s3;
	s2 = malloc(sizeof(char) * 8);
	ft_memccpy(NULL, s1, 'x', 8);
	ft_memccpy(s2, NULL, 'x', 8);
	s3 = ft_memccpy(s2, s1, 'j', 8);
	if (strncmp(s2, "bonj", 4) != 0)
		KO(ft_memccpy)
	if (s3 != s2 + 4)
		KO(ft_memccpy)
	s3 = ft_memccpy(s2, s1, 'x', 8);
	if (s3 != NULL)
		KO(ft_memccpy)
	OK(ft_memccpy)
}

void	test_ft_memmove()
{
	ft_memmove(NULL, NULL, 8);
	char	*s1;
	char	*s2;
	s1 = malloc(sizeof(char) * 11);
	s2 = s1 + 3;
	s1[0] = 'b';
	s1[1] = 'o';
	s1[2] = 'n';
	s1[3] = 'j';
	s1[4] = 'o';
	s1[5] = 'u';
	s1[6] = 'r';
	s1[7] = '\0';
	ft_memmove(NULL, s1, 8);
	ft_memmove(s2, NULL, 8);
	ft_memmove(s2, s1, 8);
	if (strcmp(s2, "bonjour") != 0)
		KO(ft_memmove)
	if (strcmp(s1, "bonbonjour") != 0)
		KO(ft_memmove)
	else
		OK(ft_memmove)
}

void	test_ft_memchr(void)
{
	ft_memchr(NULL, 'x', 5);
	char	s[8] = "bonjour";
	if (ft_memchr(s, 'x', 10) != NULL)
		KO(ft_memchr)
	if (ft_memchr(s, 'o', 5) != (s + 1))
		KO(ft_memchr)
	OK(ft_memchr)
}

void	test_ft_memcmp(void)
{
	if (ft_memcmp(NULL, NULL, 5) != 0)
		KO(ft_memcmp)
	char	s1[8] = "bonjour";
	char	s2[8] = "bonsoir";
	if (ft_memcmp(s1, NULL, 5) != 0)
		KO(ft_memcmp)
	if (ft_memcmp(NULL, s2, 5) != 0)
		KO(ft_memcmp)
	if (ft_memcmp(s1, s2, 0) != 0)
		KO(ft_memcmp)
	if (ft_memcmp(s1, s2, 3) != 0)
		KO(ft_memcmp)
	if (ft_memcmp(s1, s2, 7) >= 0)
		KO(ft_memcmp)
	if (ft_memcmp(s2, s1, 7) <= 0)
		KO(ft_memcmp)
	OK(ft_memcmp)
}

void	test_ft_strlen(void)
{
	char	s[10] = "bonjour";

	if (ft_strlen(NULL) != 0)
		KO(ft_strlen)
	if (ft_strlen(s) != 7)
		KO(ft_strlen)
	OK(ft_strlen)
}

void	test_ft_strdup(void)
{
	char	*s = malloc(sizeof(char) * 8);
	s = "bonjour";
	if (ft_strdup(NULL) != NULL)
		KO(ft_strdup)
	if (strcmp(s, ft_strdup(s)) != 0)
		KO(ft_strdup)
	OK(ft_strdup)
}

void	test_ft_strcpy(void)
{
	char	dst[8];
	char	src[] = "bonjour";
	if (ft_strcpy(NULL, NULL) != NULL)
		KO(ft_strcpy)
	if (ft_strcpy(dst, NULL) != NULL)
		KO(ft_strcpy)
	if (ft_strcpy(NULL, dst) != NULL)
		KO(ft_strcpy)
	if (strcmp(ft_strcpy(dst, src), "bonjour") != 0)
		KO(ft_strcpy)
	if (strcmp(dst, src) != 0)
		KO(ft_strcpy)
	OK(ft_strcpy)
}

void	test_ft_strncpy(void)
{
	char	dst[10];
	char	src[] = "bonjour";
	char	dst2[10];
	if (ft_strncpy(NULL, NULL, 3) != NULL)
		KO(ft_strncpy)
	if (ft_strncpy(dst, NULL, 3) != NULL)
		KO(ft_strncpy)
	if (ft_strncpy(NULL, src, 3) != NULL)
		KO(ft_strncpy)
	if (strncmp(ft_strncpy(dst, src, 3), "bon", 3) != 0)
		KO(ft_strncpy)
	ft_strncpy(dst, src, 10);
	strncpy(dst2, src, 10);
	if (memcmp(dst, dst2, 10) != 0)
		KO(ft_strncpy)
	OK(ft_strncpy)
}

void	test_ft_strcat(void)
{
	char	dst[10] = "lu";
	char	src[] = "bonjour";
	if (ft_strcat(NULL, NULL) != NULL)
		KO(ft_strcat)
	if (ft_strcat(dst, NULL) != NULL)
		KO(ft_strcat)
	if (ft_strcat(NULL, src) != NULL)
		KO(ft_strcat)
	if (strcmp(ft_strcat(dst, src), "lubonjour"))
		KO(ft_strcat)
	OK(ft_strcat)
}

void	test_ft_strncat(void)
{
	char	dst[10] = "lu";
	char	src[] = "bonjour";
	if (ft_strncat(NULL, NULL, 3) != NULL)
		KO(ft_strncat)
	if (ft_strncat(dst, NULL, 3) != NULL)
		KO(ft_strncat)
	if (ft_strncat(NULL, src, 3) != NULL)
		KO(ft_strncat)
	if (strcmp(ft_strncat(dst, src, 3), "lubon"))
		KO(ft_strncat)
	OK(ft_strncat)
}

void	test_ft_strlcat(void)
{
	if (ft_strlcat(NULL, NULL, 1) != 0)
		KO(ft_strlcat)
	//size < strlen(dst)
	char	*dst = malloc(sizeof(char) * 15);
	char	src[] = "hello";
	dst[0] = '.';
	dst[1] = '.';
	dst[2] = '.';
	dst[3] = '\0';
	if (ft_strlcat(dst, src, 0) != 5)
		KO(ft_strlcat)
	if (strcmp(dst, "...") != 0)
		KO(ft_strlcat)
	//size < strlen(dst) + strlen(src)
	dst[0] = '.';
	dst[1] = '.';
	dst[2] = '.';
	dst[3] = '\0';
	if (ft_strlcat(dst, src, 4) != 8)
		KO(ft_strlcat)
	if (strcmp(dst, "...") != 0)
		KO(ft_strlcat)
	//size > strlen(dst) + strlen(src)
	dst[0] = '.';
	dst[1] = '.';
	dst[2] = '.';
	dst[3] = '\0';
	if (ft_strlcat(dst, src, 10) != 8)
		KO(ft_strlcat)
	if (strcmp(dst, "...hello") != 0)
	{
		printf("   ...hello = %s\n", dst);
		KO(ft_strlcat)
	}
	OK(ft_strlcat)
}

void	test_ft_strchr(void)
{
	if (ft_strchr(NULL, 'o') != NULL)
		KO(ft_strchr)
	char	s[] = "bonjour";
	if (ft_strchr(s, 'o') != s + 1)
		KO(ft_strchr)
	if (ft_strchr(s, '\0') != (s + 7))
	{
		printf("%p %p\n", s, ft_strchr(s, '\0'));
		KO(ft_strchr)
	}
	if (ft_strchr(s, 'a') != NULL)
		KO(ft_strchr)
	OK(ft_strchr)
}

void	test_ft_strrchr(void)
{
	if (ft_strrchr(NULL, 'o') != NULL)
		KO(ft_strrchr)
	char	s[] = "bonjour";
	if (ft_strrchr(s, 'o') != s + 4)
		KO(ft_strrchr)
	if (ft_strrchr(s, '\0') != s + 7)
		KO(ft_strrchr)
	if (ft_strrchr(s, 'a') != NULL)
		KO(ft_strrchr)
	OK(ft_strrchr)
}

void	test_ft_strstr(void)
{
	if (ft_strstr(NULL, "soir") != NULL)
		KO(ft_strstr)
	if (ft_strstr(NULL, NULL) != NULL)
		KO(ft_strstr)
	if (ft_strstr(NULL, NULL) != NULL)
		KO(ft_strstr)
	char	s[] = "bonjour";
	if (ft_strstr(s, "soir") != NULL)
		KO(ft_strstr)
	if (ft_strstr(s, "jour") != s + 3)
		KO(ft_strstr)
	OK(ft_strstr)
}

void	test_ft_strnstr(void)
{
	if (ft_strnstr(NULL, "soir", 7) != NULL)
		KO(ft_strnstr)
	if (ft_strnstr(NULL, NULL, 7) != NULL)
		KO(ft_strnstr)
	if (ft_strnstr(NULL, NULL, 7) != NULL)
		KO(ft_strnstr)
	char	s[] = "bonjour";
	if (ft_strnstr(s, "soir", 7) != NULL)
		KO(ft_strnstr)
	if (ft_strnstr(s, "jour", 7) != s + 3)
	{
		printf("%p\n", ft_strnstr(s, "jour", 7));
		KO(ft_strnstr)
	}
	if (ft_strnstr(s, "nj", 4) != s + 2)
		KO(ft_strnstr)
	//on cherche nj dans les 2 premiers char de s
	if (ft_strnstr(s, "nj", 2) != NULL)
		KO(ft_strnstr)
	//si s2 vide, retourner s1
	if (ft_strnstr(s, "", 1) != s)
		KO(ft_strnstr)
	OK(ft_strnstr)
}

void	test_ft_strcmp(void)
{
	if (ft_strcmp("abcd", "abc") < 0)
		KO(ft_strcmp)
	if (ft_strcmp("abc", "abc") != 0)
		KO(ft_strcmp)
	if (ft_strcmp("abc", "abcd") > 0)
		KO(ft_strcmp)
	if (ft_strcmp("\200", "\0") != strcmp("\200", "\0"))
		KO(ft_strcmp)
	OK(ft_strcmp)
}

void	test_ft_strncmp(void)
{
	if (ft_strncmp("abcd", "abc", 4) < 0)
		KO(ft_strncmp)
	if (ft_strncmp("abc", "abc", 4) != 0)
		KO(ft_strncmp)
	if (ft_strncmp("abc", "abcd", 4) > 0)
		KO(ft_strncmp)
	if (ft_strncmp("bonjour", "bonsoir", 3) != 0)
	{
		printf("%d != 0 \n", ft_strncmp("bonjour", "bonsoir", 3));
		KO(ft_strncmp)
	}
	OK(ft_strncmp)
}

void	test_ft_atoi(void)
{
	if (ft_atoi("123") != 123)
		KO(ft_atoi)
	if (ft_atoi("+123") != 123)
		KO(ft_atoi)
	if (ft_atoi("-123") != -123)
		KO(ft_atoi)
	if (ft_atoi("-00123abc") != -123)
		KO(ft_atoi)
	if (ft_atoi("\n\t\r\v -123 \n4d5") != -123)
		KO(ft_atoi)
	OK(ft_atoi)
}

void	test_ft_tolower(void)
{
	int  c;

	c = 0;
	if (ft_tolower(EOF) != EOF)
		KO(ft_tolower)
	while (c < 256)
	{
		if (ft_tolower(c) != tolower(c))
			KO(ft_tolower)
		c++;
	}
	OK(ft_tolower)
}

void	test_ft_toupper(void)
{
	int  c;

	c = 0;
	if (ft_toupper(EOF) != EOF)
		KO(ft_toupper)
	while (c < 256)
	{
		if (ft_toupper(c) != toupper(c))
			KO(ft_toupper)
	   c++;
	}
	OK(ft_toupper)
}

void	test_ft_memalloc(void)
{
	void	*ptr;
	ptr = ft_memalloc(10);
	int i;
	for (i = 0; i < 10; i++)
	{
		if (((char*)ptr)[i] != '\0')
			KO(ft_memalloc)
	}
	OK(ft_memalloc)
}

void	test_ft_memdel(void)
{
	ft_memdel(NULL);
	void	**ap;
	ap = (void **)malloc(sizeof(void *));
	*ap = NULL;
	ft_memdel(ap);
	*ap = malloc(10);
	ft_memdel(ap);
	OK(ft_memdel)
}

void	test_ft_strnew(void)
{
	char   *str;
	str = ft_strnew(10);
	int i;
	for (i = 0; i < 11; i++)
	{
		if (str[i] != '\0')
			KO(ft_strnew)
	}
	OK(ft_strnew)
}

void	test_ft_strdel(void)
{
	ft_strdel(NULL);
	char	**as;
	as = (char **)malloc(sizeof(char *));
	*as = NULL;
	ft_strdel(as);
	*as = malloc(10);
	ft_strdel(as);
	OK(ft_strdel)
}

void	test_ft_strclr(void)
{
	ft_strclr(NULL);
	char	s[] = "bonjour";
	char	empty[8] = {0};
	ft_strclr(s);
	if (memcmp(s, empty, 8) != 0)
		KO(ft_strclr)
	OK(ft_strclr)
}

void	tst_fct_plus_one(char *c)
{
	*c = *c + 1;
}

void	tst_fct_plus_one_i(unsigned int i, char *c)
{
	*c = *c + i;
}

void	test_ft_striter(void)
{
	ft_striter(NULL, NULL);
	ft_striter(NULL, &tst_fct_plus_one);
	char	s[] = "abcde";
	ft_striter(s, NULL);
	ft_striter(s, &tst_fct_plus_one);
	if (strcmp(s, "bcdef") != 0)
		KO(ft_striter)
	OK(ft_striter)
}

void	test_ft_striteri(void)
{
	ft_striteri(NULL, NULL);
	ft_striteri(NULL, &tst_fct_plus_one_i);
	char	s[] = "aaaaa";
	ft_striteri(s, NULL);
	ft_striteri(s, &tst_fct_plus_one_i);
	if (strcmp(s, "abcde") != 0)
		KO(ft_striteri)
	OK(ft_striteri)
}

char	tst_fct_plus_one2(char c)
{
	return (c + 1);
}

char	tst_fct_plus_one2_i(unsigned int i, char c)
{
	return (c + i);
}

void	test_ft_strmap(void)
{
	ft_strmap(NULL, NULL);
	ft_strmap(NULL, &tst_fct_plus_one2);
	char	s[] = "abcde";
	char	*s2;
	ft_strmap(s, NULL);
	s2 = ft_strmap(s, &tst_fct_plus_one2);
	if (strcmp(s, "abcde") != 0)
		KO(ft_strmap)
	if (strcmp(s2, "bcdef") != 0)
		KO(ft_strmap)
	OK(ft_strmap)
}

void	test_ft_strmapi(void)
{
	ft_strmapi(NULL, NULL);
	ft_strmapi(NULL, &tst_fct_plus_one2_i);
	char	s[] = "aaaaa";
	char	*s2;
	ft_strmapi(s, NULL);
	s2 = ft_strmapi(s, &tst_fct_plus_one2_i);
	if (strcmp(s, "aaaaa") != 0)
		KO(ft_strmapi)
	if (strcmp(s2, "abcde") != 0)
		KO(ft_strmapi)
	OK(ft_strmapi)
}

//si NULL, renvoyer 0 ????
void	test_ft_strequ(void)
{
	char	s1[] = "bonjour";
	char	s2[] = "bonjour";
	char	s3[] = "bonsoir";
	char	s4[] = "bon";
	if (ft_strequ(NULL, NULL) != 0)
		KO(ft_strequ)
	if (ft_strequ(s1, NULL) != 0)
		KO(ft_strequ)
	if (ft_strequ(NULL, s2) != 0)
		KO(ft_strequ)
	if (ft_strequ(s1, s2) != 1)
		KO(ft_strequ)
	if (ft_strequ(s1, s3) != 0)
		KO(ft_strequ)
	if (ft_strequ(s1, s4) != 0)
		KO(ft_strequ)
	OK(ft_strequ)
}

//si NULL, renvoyer 0 ????
void	test_ft_strnequ(void)
{
	char	s1[] = "bonjour";
	char	s2[] = "bonjour";
	char	s3[] = "bonsoir";
	char	s4[] = "bon";
	if (ft_strnequ(NULL, NULL, 7) != 0)
		KO(ft_strnequ)
	if (ft_strnequ(s1, NULL, 7) != 0)
		KO(ft_strnequ)
	if (ft_strnequ(NULL, s2, 7) != 0)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s2, 7) != 1)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s3, 7) != 0)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s4, 7) != 0)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s3, 3) != 1)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s3, 1) != 1)
		KO(ft_strnequ)
	if (ft_strnequ(s1, s3, 0) != 1)
		KO(ft_strnequ)
	OK(ft_strnequ)
}

void	test_ft_strsub(void)
{
	char	s[] = "bonjourbon";
	if (ft_strsub(NULL, 0, 1) != NULL)
		KO(ft_strsub)
	if (strcmp(ft_strsub(s, 3, 4), "jour") != 0)
		KO(ft_strsub)
	OK(ft_strsub)
}

void	test_ft_strjoin(void)
{
	char	s1[] = "bon";
	char	s2[] = "jour";
	if (ft_strjoin(NULL, NULL) != NULL)
		KO(ft_strjoin)
	if (ft_strjoin(s1, NULL) != NULL)
		KO(ft_strjoin)
	if (ft_strjoin(NULL, s2) != NULL)
		KO(ft_strjoin)
	if (strcmp(ft_strjoin(s1, s2), "bonjour") != 0)
		KO(ft_strjoin)
	OK(ft_strjoin)
}

void	test_ft_strtrim(void)
{
	char	s[] = " \n\tbon\n \tjour\n\t ";
	if (ft_strtrim(NULL) != NULL)
		KO(ft_strtrim)
	if (strcmp(ft_strtrim(""), "") != 0)
		KO(ft_strtrim)
	if (strcmp(ft_strtrim(s), "bon\n \tjour") != 0)
		KO(ft_strtrim)
	OK(ft_strtrim)
}

void	test_ft_strsplit(void)
{
	char	s[] = "*salut*les***etudiants*";
	char	*split[4] = {"salut", "les", "etudiants", NULL};
	if (ft_strsplit(NULL, '*') != NULL)
		KO(ft_strsplit)
	char	**res = ft_strsplit(s, '\0');
	if (strcmp(res[0], s) != 0)
			KO(ft_strsplit)
	if (res[1] != NULL)
			KO(ft_strsplit)
	res = ft_strsplit(s, '*');
	int i = 0;
	while (res[i] != NULL)
	{
		if (strcmp(res[i], split[i]) != 0)
			KO(ft_strsplit)
		i++;
	}
	OK(ft_strsplit)
}

void	test_ft_itoa(void)
{
	if (strcmp(ft_itoa(0), "0") != 0)
		KO(ft_itoa)
	if (strcmp(ft_itoa(123456), "123456") != 0)
		KO(ft_itoa)
	if (strcmp(ft_itoa(-123456), "-123456") != 0)
		KO(ft_itoa)
	if (strcmp(ft_itoa(INT_MIN), "-2147483648") != 0)
		KO(ft_itoa)
	if (strcmp(ft_itoa(INT_MAX), "2147483647") != 0)
		KO(ft_itoa)
	OK(ft_itoa)
}

void	test_ft_putchar(void)
{
	int		out;
	int		p[2];
	char	sortie[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putchar('a');
	sortie[read(p[0], sortie, 100)] = '\0';
	dup2(out, 1);
	if (0 != strcmp(sortie, "a"))
		KO(ft_putchar);
	OK(ft_putchar);
}

void	test_ft_putstr(void)
{
	int		out;
	int		p[2];
	char	sortie[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putstr("Hello !");
	sortie[read(p[0], sortie, 100)] = '\0';
	dup2(out, 1);
	if (0 != strcmp(sortie, "Hello !"))
		KO(ft_putstr);
	OK(ft_putstr);
}

void	test_ft_putendl(void)
{
	int		out;
	int		p[2];
	char	sortie[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putendl("Hello !");
	sortie[read(p[0], sortie, 100)] = '\0';
	dup2(out, 1);
	if (0 != strcmp(sortie, "Hello !\n"))
		KO(ft_putendl);
	OK(ft_putendl);
}

void	test_ft_putnbr(void)
{
	int		out;
	int		p[2];
	char	sortie[100];
	int		failed;

	failed = 0;
	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putnbr(0);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "0"))
		failed = 1;
	ft_putnbr(-123);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "-123"))
		failed = 1;
	ft_putnbr(INT_MIN);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "-2147483648"))
		failed = 1;
	ft_putnbr(INT_MAX);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "2147483647"))
		failed = 1;
	ft_putnbr(0);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "0"))
		failed = 1;
	dup2(out, 1);
	if (failed)
		KO(ft_putnbr);
	OK(ft_putnbr);
}

void	test_ft_putchar_fd(void)
{
	int		p[2];
	char	sortie[100];

	pipe(p);
	ft_putchar_fd('a', p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "a"))
		KO(ft_putchar_fd);
	OK(ft_putchar_fd);
}

void	test_ft_putstr_fd(void)
{
	int		p[2];
	char	sortie[100];

	pipe(p);
	ft_putstr_fd("Yellow !", p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "Yellow !"))
		KO(ft_putstr_fd);
	OK(ft_putstr_fd);
}

void	test_ft_putendl_fd(void)
{
	int		p[2];
	char	sortie[100];

	pipe(p);
	ft_putendl_fd("Bonjour", p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "Bonjour\n"))
		KO(ft_putendl_fd);
	OK(ft_putendl_fd);
}

void	test_ft_putnbr_fd(void)
{
	int		p[2];
	char	sortie[100];

	pipe(p);
	ft_putnbr_fd(0, p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "0"))
		KO(ft_putnbr_fd);
	ft_putnbr_fd(-123, p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "-123"))
		KO(ft_putnbr_fd);
	ft_putnbr_fd(INT_MIN, p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "-2147483648"))
		KO(ft_putnbr_fd);
	ft_putnbr_fd(INT_MAX, p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "2147483647"))
		KO(ft_putnbr_fd);
	OK(ft_putnbr_fd);
}

//utilisation de free ?
void	test_ft_lstnew(void)
{
	t_list *cell = ft_lstnew(NULL, 1);
	if (cell->next != NULL)
		KO(ft_lstnew)
	if (cell->content != NULL)
		KO(ft_lstnew)
	if (cell->content_size != 0)
		KO(ft_lstnew)
	int a = 1;
	cell = ft_lstnew(&a, sizeof(int));
	if (cell->next != NULL)
		KO(ft_lstnew)
	if (*((int *)cell->content) != 1)
		KO(ft_lstnew)
	if (cell->content == &a)
		KO(ft_lstnew)
	if (cell->content_size  != sizeof(int))
		KO(ft_lstnew)
	OK(ft_lstnew)
}

void	del(void *content, size_t size)
{
	memset(content, '\0', size);
	free(content);
	content = NULL;
}

void	test_ft_lstdelone(void)
{
	ft_lstdelone(NULL, NULL);
	ft_lstdelone(NULL, &del);
	int	 a = 1;
	t_list  *cell = NULL;
	t_list  **alst = &cell;
	ft_lstdelone(alst, del);
	cell = ft_lstnew(&a, sizeof(int));
	ft_lstdelone(alst, NULL);
	ft_lstdelone(alst, &del);
	if (cell != NULL)
		KO(ft_lstdelone)
	OK(ft_lstdelone)
}

void	test_ft_lstadd(void)
{
	int	 a = 1;
	int	 b = 2;
	int	 c = 3;
	t_list  *first = NULL;
	t_list  *new = ft_lstnew(&a, sizeof(int));
	t_list  **alst = &first;

	ft_lstadd(NULL, NULL);
	ft_lstadd(alst, NULL);
	ft_lstadd(NULL, new);
	ft_lstadd(alst, new);
	if (*alst != new)
		KO(ft_lstadd)
	if ((*alst)->next != NULL)
		KO(ft_lstadd)
	first = ft_lstnew(&b, sizeof(int));
	t_list  *second = ft_lstnew(&c, sizeof(int));
	t_list  **alst2 = &first;
	first->next = second;
	ft_lstadd(alst2, new);
	if (*alst2 != new)
		KO(ft_lstadd)
	//if ((*alst2)->next != first)
	//	KO(ft_lstadd)
	OK(ft_lstadd)
}

//verifier out of bound error !
void	test_ft_realloc(void)
{
	char	*str = (char*)malloc(sizeof(char) * 2);
	str[1] = '\0';
	str[2] = 'x';
	str = ft_realloc(str, 2, 3);
	str[1] = '1';
	str[2] = '\0';
	OK(ft_realloc)
}

int	 main(void)
{
  test_ft_atoi();
  test_ft_bzero();
  test_ft_isalnum();
  test_ft_isalpha();
  test_ft_isascii();
  test_ft_isblank();
  test_ft_iscntrl();
  test_ft_isdigit();
  test_ft_isgraph();
  test_ft_islower();
  test_ft_isprint();
  test_ft_ispunct();
  test_ft_isspace();
  test_ft_isupper();
  test_ft_isxdigit();
  test_ft_itoa();
  test_ft_memalloc();
  test_ft_memccpy();
  test_ft_memchr();
  test_ft_memcmp();
  test_ft_memcpy();
  test_ft_memdel();
  test_ft_memmove();
  test_ft_memset();
  test_ft_putchar();
  test_ft_putchar_fd();
  test_ft_putendl();
  test_ft_putendl_fd();
  test_ft_putnbr();
  test_ft_putnbr_fd();
  test_ft_putstr();
  test_ft_putstr_fd();
  test_ft_realloc();
  test_ft_strcat();
  test_ft_strchr();
  test_ft_strclr();
  test_ft_strcmp();
  test_ft_strcpy();
  test_ft_strdel();
  test_ft_strdup();
  test_ft_strequ();
  test_ft_striter();
  test_ft_striteri();
  test_ft_strjoin();
  test_ft_strlcat();
  test_ft_strlen();
  test_ft_strmap();
  test_ft_strmapi();
  test_ft_strncat();
  test_ft_strncmp();
  test_ft_strncpy();
  test_ft_strnequ();
  test_ft_strnew();
  test_ft_strnstr();
  test_ft_strrchr();
  test_ft_strsplit();
  test_ft_strstr();
  test_ft_strsub();
  test_ft_strtrim();
  test_ft_tolower();
  test_ft_toupper();
	return (0);
}
