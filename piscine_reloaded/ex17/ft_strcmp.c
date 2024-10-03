/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:58:07 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/01 10:32:53 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(int n)
{
	return ((n > 0) - (n < 0));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (get_sign(s1[i] - s2[i]));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("A diferença das strings é %d\n", strcmp("oi", "O"));
	printf("A diferença das strings é %d\n", ft_strcmp("oi", "O"));
}
*/