/*
** get_min.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:48:16 2015 Thomas Martins
** Last update Fri Jan 16 12:50:13 2015 Thomas Martins
*/

#include "struct.h"

int	get_min(int x, int **tab_int)
{
  int	a;
  int	b;
  int	c;

  a = tab_int[0][x];
  if (x > 0)
    b = tab_int[1][x - 1];
  else
    b = 0;
  if (x > 0)
    c = tab_int[0][x - 1];
  else
    c = 0;
  if (a <= b && a <= c)
    return (a);
  else if (b <= a && b <= c)
    return (b);
  return (c);
}
