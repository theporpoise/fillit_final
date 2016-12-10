/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:06:37 by mgould            #+#    #+#             */
/*   Updated: 2016/12/10 11:17:15 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char		*g_minos[] = {
	"###.\n..#.\n....\n....\n\n",
	"....\n###.\n..#.\n....\n\n",
	"....\n....\n###.\n..#.\n\n",

	".###\n...#\n....\n....\n\n",
	"....\n.###\n...#\n....\n\n",
	"....\n....\n.###\n...#\n\n",

	".#..\n.#..\n##..\n....\n\n",
	"....\n.#..\n.#..\n##..\n\n",

	"..#.\n..#.\n.##.\n....\n\n",
	"....\n..#.\n..#.\n.##.\n\n",

	"...#\n...#\n..##\n....\n\n",
	"....\n...#\n...#\n..##\n\n",

	"#...\n###.\n....\n....\n\n",
	"....\n#...\n###.\n....\n\n",
	"....\n....\n#...\n###.\n\n",

	".#..\n.###\n....\n....\n\n",
	"....\n.#..\n.###\n....\n\n",
	"....\n....\n.#..\n.###\n\n",

	"##..\n#...\n#...\n....\n\n",
	"....\n##..\n#...\n#...\n\n",

	".##.\n.#..\n.#..\n....\n\n",
	"....\n.##.\n.#..\n.#..\n\n",

	"..##\n..#.\n..#.\n....\n\n",
	"....\n..##\n..#.\n..#.\n\n",

	"###.\n.#..\n....\n....\n\n",
	"....\n###.\n.#..\n....\n\n",
	"....\n....\n###.\n.#..\n\n",

	".###\n..#.\n....\n....\n\n",
	"....\n.###\n..#.\n....\n\n",
	"....\n....\n.###\n..#.\n\n",

	".#..\n##..\n.#..\n....\n\n",
	"..#.\n.##.\n..#.\n....\n\n",
	"...#\n..##\n...#\n....\n\n",

	"....\n.#..\n##..\n.#..\n\n",
	"....\n..#.\n.##.\n..#.\n\n",
	"....\n...#\n..##\n...#\n\n",

	".#..\n###.\n....\n....\n\n",
	"....\n.#..\n###.\n....\n\n",
	"....\n....\n.#..\n###.\n\n",

	"..#.\n.###\n....\n....\n\n",
	"....\n..#.\n.###\n....\n\n",
	"....\n....\n..#.\n.###\n\n",

	"#...\n##..\n#...\n....\n\n",
	".#..\n.##.\n.#..\n....\n\n",
	"..#.\n..##\n..#.\n....\n\n",

	"....\n#...\n##..\n#...\n\n",
	"....\n.#..\n.##.\n.#..\n\n",
	"....\n..#.\n..##\n..#.\n\n",

	"###.\n#...\n....\n....\n\n",
	"....\n###.\n#...\n....\n\n",
	"....\n....\n###.\n#...\n\n",

	".###\n.#..\n....\n....\n\n",
	"....\n.###\n.#..\n....\n\n",
	"....\n....\n.###\n.#..\n\n",

	"##..\n.#..\n.#..\n....\n\n",
	"....\n##..\n.#..\n.#..\n\n",

	".##.\n..#.\n..#.\n....\n\n",
	"....\n.##.\n..#.\n..#.\n\n",

	"..##\n...#\n...#\n....\n\n",
	"....\n..##\n...#\n...#\n\n",

	"..#.\n###.\n....\n....\n\n",
	"....\n..#.\n###.\n....\n\n",
	"....\n....\n..#.\n###.\n\n",

	"...#\n.###\n....\n....\n\n",
	"....\n...#\n.###\n....\n\n",
	"....\n....\n...#\n.###\n\n",

	"#...\n#...\n##..\n....\n\n",
	"....\n#...\n#...\n##..\n\n",

	".#..\n.#..\n.##.\n....\n\n",
	"....\n.#..\n.#..\n.##.\n\n",

	"..#.\n..#.\n..##\n....\n\n",
	"....\n..#.\n..#.\n..##\n\n",

	".##.\n##..\n....\n....\n\n",
	"....\n.##.\n##..\n....\n\n",
	"....\n....\n.##.\n##..\n\n",

	"..##\n.##.\n....\n....\n\n",
	"....\n..##\n.##.\n....\n\n",
	"....\n....\n..##\n.##.\n\n",

	"#...\n##..\n.#..\n....\n\n",
	"....\n#...\n##..\n.#..\n\n",

	".#..\n.##.\n..#.\n....\n\n",
	"....\n.#..\n.##.\n..#.\n\n",

	"..#.\n..##\n...#\n....\n\n",
	"....\n..#.\n..##\n...#\n\n",

	"####\n....\n....\n....\n\n",
	"....\n####\n....\n....\n\n",
	"....\n....\n####\n....\n\n",
	"....\n....\n....\n####\n\n",

	"#...\n#...\n#...\n#...\n\n",
	".#..\n.#..\n.#..\n.#..\n\n",
	"..#.\n..#.\n..#.\n..#.\n\n",
	"...#\n...#\n...#\n...#\n\n",

	"##..\n##..\n....\n....\n\n",
	"....\n##..\n##..\n....\n\n",
	"....\n....\n##..\n##..\n\n",

	".##.\n.##.\n....\n....\n\n",
	"....\n.##.\n.##.\n....\n\n",
	"....\n....\n.##.\n.##.\n\n",

	"..##\n..##\n....\n....\n\n",
	"....\n..##\n..##\n....\n\n",
	"....\n....\n..##\n..##\n\n",

	"##..\n.##.\n....\n....\n\n",
	"....\n##..\n.##.\n....\n\n",
	"....\n....\n##..\n.##.\n\n",

	".##.\n..##\n....\n....\n\n",
	"....\n.##.\n..##\n....\n\n",
	"....\n....\n.##.\n..##\n\n",

	".#..\n##..\n#...\n....\n\n",
	"....\n.#..\n##..\n#...\n\n",

	"..#.\n.##.\n.#..\n....\n\n",
	"....\n..#.\n.##.\n.#..\n\n",

	"...#\n..##\n..#.\n....\n\n",
	"....\n...#\n..##\n..#.\n\n"
};
