/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:01:08 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/01 11:25:46 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = NULL;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	i;

	a = ft_range(5, 50);
	i = 0;
	while (a[i])
	{
		printf("%d\n", a[i]);
		i++;
	}
	free(a);
	return (0);
}
*/