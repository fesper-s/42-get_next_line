/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:27:07 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/02 14:52:11 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*str;

	fd = open("./teste.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s\n", str);
	free(str);
	return (0);
}
