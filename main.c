/*
** main.c for  in /home/mart_4/rendu/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Fri Jan 16 12:29:38 2015 Thomas Martins
** Last update Sun May  3 18:54:07 2015 Thomas Martins
*/

#include "struct.h"

void		check_convert(void)
{
  my_putstr("The file is not good\n");
  exit(1);
}

void		check_one(void)
{
  my_putstr("I can't read more 1000 arguments in file, sorry =) \n");
  exit(1);
}
int		main(int ac, char **av)
{
  t_quake	quake;
  int		fd;
  char		*s;
  char		**tab;
  int		line;

  (void)ac;
  line = 0;
  if ((fd = open(av[1], O_RDONLY)) < 0)
    return (1);
  s = get_next_line(fd);
  /* if ((my_getnbr(s)) > 1000 || my_getnbr(s) < 0) */
  /*   check_one(); */
  if ((tab = malloc(sizeof(char *) * (my_getnbr(s) + 1))) == NULL)
    return (1);
  while ((s = get_next_line(fd)))
    {
      tab[line] = s;
      line++;
    }
  tab[line] = 0;
  search_quake(tab, my_strlen(tab[0]), line, &quake);
  free(s);
  return (0);
}
