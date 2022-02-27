/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsomrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:41:08 by lsomrat           #+#    #+#             */
/*   Updated: 2022/02/27 23:00:38 by lsomrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	res;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	res = 0;
	if (size > dstlen)
		res = dstlen + srclen;
	else
		res = size + srclen;
	while (src[i] && (dstlen + 1) < size)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (res);
}
