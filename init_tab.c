/*
** search_quake.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:32:19 2015 Thomas Martins
** Last update Fri Jan 16 12:34:22 2015 Thomas Martins
*/

#include "struct.h"

int	**init_tab(int len)
{
  int	**tab_int;

  tab_int = malloc(2 * sizeof(int *));
  tab_int[0] = malloc(len * sizeof(int));
  tab_int[1] = malloc(len * sizeof(int));
  if (!tab_int || !tab_int[0] || !tab_int[1])
    return (NULL);
  return (tab_int);
}
