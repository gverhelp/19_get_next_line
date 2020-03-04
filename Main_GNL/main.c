/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gverhelp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:01:22 by gverhelp          #+#    #+#             */
/*   Updated: 2020/02/28 15:24:53 by gverhelp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"

int	main()
{
	char	*line;
	int		fd;
	int		ret;
	int		fd2;

	fd = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);

	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		//printf("ret : %d\n", ret);
		free(line);
	}
//	printf("ret : %d\n", ret);
//	system ("leaks a.out");
/*
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	printf("ret : %d\n", ret);
	free(line);
*/
	close(fd);
	close(fd2);
	return (0);
}


//18 et 19
