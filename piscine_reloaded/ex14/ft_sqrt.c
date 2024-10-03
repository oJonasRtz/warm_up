/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:52:18 by jopereir          #+#    #+#             */
/*   Updated: 2024/09/30 15:59:38 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i != nb)
	{
		if (i >= nb)
			return (0);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_sqrt(10);
	printf("%d\n", a);
}
*/