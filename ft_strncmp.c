/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsomrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:40:17 by lsomrat           #+#    #+#             */
/*   Updated: 2022/02/24 00:55:18 by lsomrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 != '\0' && *str2 != '\0' && n != 0)
		if (str1[n] < str2[n]) || (str1[n] > str2[n])
			return (str1 - str2);
		return (0);
	n--;
}
