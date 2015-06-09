/*
** convet.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 13:50:34 2015 Thomas Martins
** Last update Sun Jan 18 10:28:50 2015 Thomas Martins
*/

#include "struct.h"

void	convert(int *tab, char *str, int len)
{
  int	j;

  j = 0;
  while (j < len)
    {
      if (str[j] == '.')
	tab[j] = 1;
      else if (str[j] == 'o')
	tab[j] = 0;
      else
	check_convert();
      j++;
    }
}
