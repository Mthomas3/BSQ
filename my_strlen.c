/*
** my_strlen.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:27:50 2015 Thomas Martins
** Last update Fri Jan 16 13:31:22 2015 Thomas Martins
*/

#include "struct.h"

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    a++;
  return (a);
}
