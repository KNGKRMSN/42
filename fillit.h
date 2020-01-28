/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:28:23 by mprudhom          #+#    #+#             */
/*   Updated: 2020/01/28 19:08:57 by mprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "../Libft/libft.h"

# define I_tetri (int[8]) {0,0,0,1,0,2,0,3}
# define IH_tetri (int[8]) {0,0,1,0,2,0,3,0}
# define O_tetri (int[8]) {0,0,1,0,0,1,1,1}
# define L_tetri (int[8]) {0,0,0,1,0,2,1,2}
# define LH_tetri (int[8]) {2,0,0,1,1,1,2,1}
# define LD_tetri (int[8]) {1,0,1,1,1,2,0,2}
# define LHD_tetri (int[8]) {0,0,0,1,1,0,2,0}
# define T_tetri (int[8]) {0,0,1,0,2,0,1,1}
# define TD_tetri (int[8]) {1,0,0,1,1,1,2,1}
# define TL_tetri (int[8]) {0,0,0,1,1,1,0,2}
# define TR_tetri (int[8]) {1,0,0,1,1,1,1,2}
# define S_tetri (int[8]) {0,0,0,1,1,1,1,2}
# define SL_tetri (int[8]) {1,0,0,1,1,1,0,2}
# define Z_tetri (int[8]) {0,0,1,0,1,1,2,1}
# define ZL_tetri (int[8]) {1,0,2,0,0,1,1,1}

# define BUFF_SIZE 555

int	ft_1stread(char *file);
int	ft_megacheck(char *s);

typedef struct		s_tetris
{
	void		*tetris_type;
	char		c;
	struct s_tetris	*next;
}			t_tetris;

#endif
