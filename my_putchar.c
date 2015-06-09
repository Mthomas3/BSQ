/*
** putchar.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:22:23 2015 Thomas Martins
** Last update Fri Jan 16 12:22:44 2015 Thomas Martins
*/

#include "struct.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
