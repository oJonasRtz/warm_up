/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:02:54 by jopereir          #+#    #+#             */
/*   Updated: 2024/09/30 15:09:35 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	result;

	result = 'P';
	if (n < 0)
		result = 'N';
	ft_putchar(result);
}
/*
int	main(void)
{
	ft_is_negative(10);
	return (0);
}
*/