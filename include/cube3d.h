/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:31:10 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/18 14:10:28 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE3D_H
# define CUBE3D_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <stdbool.h>

# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/get_next_line_bonus.h"

# define TOO_MUCH_TEXTURES "Error \nThere is too much textures" 
# define TOO_MUCH_COLORS "Error \nThere is too much colors"
# define COLORS_ERREUR "Error \nColors take integer between 0 and 255"
# define NBR_COLORS "Error \n Three numbers are required for colors"

typedef struct s_map
{
	char	**file;
	int		size;
	char	**text;
	char	*_no;
	char	*_so;
	char	*_ea;
	char	*_we;
	char	**colors;
	char	**map;
	char	*f_col;
	char	*c_col;
	int		cont_int;
	int		*int_f;
	int		*int_c;
	int		no;
	size_t	count;
	int		so;
	int		es;
	int		we;
	int		w;
	int		e;
	int		f;
	int		c;
}	t_map;

int		main(int ac, char **av);

//Pars :
void	size_fd(t_map *map, char *av);
void	recup(t_map *map, char *av);
void	ft_strcopy(char *dst, const char *src);
void	check_name_cube(char *av);
int		tablen(char **tab);
void	inti_var(t_map *map);
void	print_char_tab(char **tab);
void	check_texture(t_map *map);
void	ft_exit(char *str);
void	check_colors(t_map *map, int i, int j);
char	*without_space(char *s);
void	tab_col(t_map *map, int i, int j);
void	convert(char **str, int *col);
void	check_int_col(t_map *map);
int		count_tab(char **tab);
void	recup_map(t_map *map, int i, int j, int f);
void	first_sapce(t_map *nmap);
char	*modif_ft_strdup(const char *src);
void	check_all_map(t_map *map, int n, int w, int s);
void	null_map(char **tab);
bool	count_colors(t_map *map);
bool	is_map(char *s);
bool	is_texture(char *s, t_map *map);
bool	count_text(t_map *map);
void	check_char_aut(t_map *map);
void	apl_pars(t_map *map, char **av);
void	free_all(t_map *map);
void	free_tab(char **tab);
char	*free_strjoins2(char *s1, char *s2);
char	*free_strjoins1(char *s1, char *s2);
void	rctext(t_map *map);

#endif