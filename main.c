/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsomrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:03:42 by lsomrat           #+#    #+#             */
/*   Updated: 2022/02/20 22:47:27 by lsomrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
	char c;
	
	c = 'Q';
	printf("%d\n", ft_isalpha(c));
	c = '2';
	printf("%d\n", ft_isalpha(c));
	return (0);
}
