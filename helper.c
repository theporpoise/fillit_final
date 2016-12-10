/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 19:49:04 by mburson           #+#    #+#             */
/*   Updated: 2016/12/09 19:49:06 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	free_n_pointers(void **ptr, size_t n, size_t size)
{
	while (n)
	{
		free(*ptr);
		ptr += size;
		n--;
	}
}