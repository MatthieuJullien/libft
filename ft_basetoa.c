/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basetoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 10:11:23 by majullie          #+#    #+#             */
/*   Updated: 2016/12/13 10:42:58 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

static unsigned int	aux_count_digits(intmax_t n, int b)
{
	unsigned int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n /= b;
	}
	return (count);
}

static void			aux_fill_alpha_n(intmax_t n, const char *base, int b,
		char *alpha_n)
{
	while (n)
	{
		*alpha_n = base[n % b];
		n /= b;
		alpha_n--;
	}
}

static char			*aux_basetoa(intmax_t n, const char *base, int b)
{
	unsigned int	nb_digits;
	char			*alpha_n;

	nb_digits = aux_count_digits(n, b);
	alpha_n = ft_strnew(nb_digits);
	aux_fill_alpha_n(n, base, b, alpha_n + nb_digits - 1);
	return (alpha_n);
}

char				*ft_basetoa(intmax_t n, const char *base)
{
	int				b;
	unsigned int	nb_digits;
	char			*alpha_n;
	int				is_neg;

	is_neg = (n < 0) ? 1 : 0;
	b = ft_strlen(base);
	if (b < 2)
		return (NULL);
	if (b != 10)
		return (aux_basetoa(n, base, b));
	nb_digits = aux_count_digits(n, b) + is_neg;
	alpha_n = ft_strnew(nb_digits);
	if (is_neg)
	{
		alpha_n[0] = '-';
		if (n == INTMAX_MIN)
		{
			ft_strdel(&alpha_n);
			return (ft_strdup("-9223372036854775808"));
		}
		n = -n;
	}
	aux_fill_alpha_n(n, base, b, alpha_n + nb_digits - 1);
	return (alpha_n);
}
