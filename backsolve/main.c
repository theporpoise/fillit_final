/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 08:01:10 by mgould            #+#    #+#             */
/*   Updated: 2016/12/09 13:43:47 by mgould           ###   ########.fr       */
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

int	invalid_chars(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] == '#' || s[i] == '.' || s[i] == '\n'))
			return (1);
		i++;
	}
	return (0);
}

int	good_len(int len)
{
	if (len == 20)
		return (1);
	else if (((len - 20) % 21) == 0)
		return (1);
	else
		return(0);
}

int	string_not_val(char *string)
{
	int len;
	int i;
	int num;
	int flag;

	i = 0;
	flag = 0;
	len = ft_strlen(string);
	num = ((len + 1) / 21);
	printf("len: %d\nnum: %d\n", len, num);
	if (!(good_len(len)))
	{
		printf("worng length\n");
		return (1);
	}
	else if (invalid_chars(string))
	{
		printf("invalid chars in string\n");
		return (1);
	}

	while (*string)
	{
		i = 0;
		printf("strlen:%zu\n", ft_strlen(string));
		if (ft_strlen(string) == 20)
		{
			while(g_minos[i])
			{
				if (!(ft_strncmp(g_minos[i], string, 20)))
				{
					printf("last tetros matched %d tetros\n", i);
					flag = 1;
					break;
				}
				i++;
			}
			if (!(flag))
			{
				printf("didn't match anything on last one");
				return (1);
			}
		}
		else
		{
			while(g_minos[i])
			{
				if (!(ft_strncmp(g_minos[i], string, 21)))
				{
					printf("%d tetros matched %d tetros\n", num, i);
					flag = 1;
					break;
				}
				i++;
			}
			if (!(flag))
			{
				printf("didn't match anything on num:%d, i:%d", num, i);
				return (1);
			}
		}
		num--;
		string += 21;
	}

	return (0);
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
	if (string_not_val(string))
	{
		printf("wrong format\n");
		return (0);
	}
}
























