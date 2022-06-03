/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:27:07 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/03 09:37:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*str;
	char	*str2;

	fd = open("./teste.txt", O_RDONLY);
	str = get_next_line(fd);
	str2 = get_next_line(fd);
	printf("%s\n", str);
	printf("%s\n", str2);
	free(str);
	free(str2);
	return (0);
}
