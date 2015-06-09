/*
** search_quake.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:34:41 2015 Thomas Martins
** Last update Sat Jan 17 07:37:41 2015 Thomas Martins
*/

#include "struct.h"

int		search_quake(char **tab, int len, int line, t_quake *quake)
{
  if (!(quake->tab_int = init_tab(len)))
    exit(0);
  init_var(quake);
  while (++quake->y < line)
    {
      quake->x = -1;
      convert(quake->tab_int[1], tab[quake->y], len);
      while (++quake->x < len)
	{
	  if (quake->tab_int[1][quake->x] > 0 && quake->y > 0)
	    quake->tab_int[1][quake->x] = get_min(quake->x, quake->tab_int) + 1;
	  if (quake->tab_int[1][quake->x] > quake->size)
	    my_quake(quake);
	}
      quake->x = -1;
      while (++quake->x < len)
	quake->tab_int[0][quake->x] = quake->tab_int[1][quake->x];
    }
  my_result(tab, quake->x_gauche, quake->y_gauche, quake->size);
  return (0);
}

void	my_quake(t_quake *quake)
{
  quake->size = quake->tab_int[1][quake->x];
  quake->x_gauche = quake->x - quake->size + 1;
  quake->y_gauche = quake->y - quake->size + 1;
}

void	init_var(t_quake *quake)
{
  quake->x_gauche = 0;
  quake->y_gauche = 0;
  quake->size = 0;
  quake->y = -1;
}
