/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 08:01:10 by mgould            #+#    #+#             */
/*   Updated: 2016/12/09 09:41:02 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//to remove later:
#include <stdio.h>
//add to .h file
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "libft.h" //compile with libft.a

//string validation
//check if valid, % 20 == (/ 20 -1), 5 chars per t line, 1 char otherwise
//only '.', '#' in t line first 4, otherwise '\n',

//open file, read in contents, return array.

char *get_input_string(char *av)
{
	int i;
	int fd;
	char buf[1];
	char *string;

	i = 0;
	if ((fd = open(av, O_RDONLY)) < 1)
	{
		printf("error\n");
		return (NULL);
	}
	while((read(fd, buf, 1)))
	{
		//printf("%s", buf);
		i++;
	}
	if (!(string = (char*)malloc(sizeof(char) * i)))
	{
		printf("error creating input string\n");
		return (NULL);
	}

	//printf("fd is %d\ni is :%d\n", fd, i);
	close(fd);
	if ((fd = open(av, O_RDONLY)) < 1)
	{
		printf("error\n");
		return (NULL);
	}
	i = 0;
	while((read(fd, buf, 1)))
	{
		//printf("%s", buf);
		string[i] = buf[0];
		i++;
	}
	close(fd);
	string[i] = '\0';
	return (string);
}


int	main(int ac, char **av)
{
	char *string;

	if (ac != 2)
	{
		printf("error\n");
		printf("you need exactly 2 args");
	}
	if (!(string = get_input_string(av[1])))
	{
		printf("error returning input string");
		return (0);
	}
	printf("string is:\n%s", string);






}
























