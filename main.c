/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:27:07 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/01 09:40:15 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;
	int	linhas = 6;

	fd = open("teste.txt", O_RDONLY);
	while (linhas--)	
		printf("%s\n", get_next_line(fd));
	return (0);
}
