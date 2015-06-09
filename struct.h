/*
** struct.h for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Jan 18 04:45:51 2015 Thomas Martins
** Last update Wed Apr 15 20:00:50 2015 Thomas Martins
*/

#ifndef STRUCT_H
# define STRUCT_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 1

typedef struct	s_quake
{
  int		size;
  int		x_gauche;
  int		y_gauche;
  int		x;
  int		y;
  int		**tab_int;
}		t_quake;

typedef struct	s_next
{
  char		buffer[SIZE + 1];
  char		*str;
  int		j;
}		t_next;

void	check_convert(void);
void	check_one(void);
void	my_quake(t_quake *quake);
void	init_var(t_quake *quake);
void	convert(int *tab, char *str, int len);
int	my_strlen(char *str);
void	my_putstr(char *str);
int	my_getnbr(char *str);
char	*get_next_line(const int fd);
int	get_min(int x, int **tab_int);
int	search_quake(char **tab, int len, int line, t_quake *quake);
int	**init_tab(int len);
void	my_result(char **tab, int x_gauche, int y_gauche, int size);
void	my_putchar(char c);

#endif
