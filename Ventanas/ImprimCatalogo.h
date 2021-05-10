void print_cata(WINDOW *menu_win, int highlight, char *choices[], int n_choices);

void print_cata(WINDOW *menu_win, int highlight, char *choices[], int n_choices)
{
  int x, y, i;

  x = 2;
  y = 2;
  box(menu_win, 0, 0);
  for(i = 0; i < n_choices; ++i)
    { if(highlight == i + 1)
      { wattron(menu_win, A_REVERSE);
        mvwprintw(menu_win, y, x, "%s", choices[i]);
        wattroff(menu_win, A_REVERSE);
      }
      else
        mvwprintw(menu_win, y, x, "%s", choices[i]);
      ++y;
    }
  imprimirAdidas();
  wrefresh(menu_win);

}

