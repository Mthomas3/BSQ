/*
** put_result.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:50:28 2015 Thomas Martins
** Last update Fri Jan 16 14:04:16 2015 Thomas Martins
*/

#include "struct.h"

void	my_result(char **tab, int x_gauche, int y_gauche, int size)
{
  int	a;
  int	b;

  a = -1;
  while (tab[++a])
    {
      b = -1;
      while (tab[a][++b])
	{
	  if (a >= y_gauche && a < y_gauche + size
	      && b >= x_gauche && b < x_gauche + size)
	    my_putchar('x');
	  else
	    my_putchar(tab[a][b]);
	}
      my_putchar('\n');
    }
}
