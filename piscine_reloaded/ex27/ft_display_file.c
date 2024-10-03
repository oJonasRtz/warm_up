/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:12:19 by jopereir          #+#    #+#             */
/*   Updated: 2024/10/03 10:40:11 by jopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar(char c, int std)
{
	write(std, &c, 1);
}

void	ft_putstr(char *str, int std)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], std);
		i++;
	}
}

void	error_messages(int n)
{
	char	*message;

	message = "Too many arguments.\n";
	if (n < 2)
		message = "File name missing.\n";
	ft_putstr(message, 1);
}

int	draw_file(char **argv)
{
	int		fd;
	int		rd;
	char	temp[1];

	fd = open(argv[1], O_RDONLY);
	rd = 1;
	if (fd < 0)
	{
		ft_putstr("Unable to open.\n", 1);
		return (1);
	}
	while (rd > 0)
	{
		rd = read(fd, temp, 1);
		if (rd < 0)
		{
			ft_putstr("Unable to open.\n", 1);
			return (1);
		}
		if (rd > 0)
			ft_putchar(temp[0], 1);
	}
	rd = close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	_return;

	_return = 0;
	if (argc == 1 || argc > 2)
	{
		error_messages(argc);
		return (1);
	}
	if (argc == 2)
	{
		_return = draw_file(argv);
	}
	return (_return);
}
