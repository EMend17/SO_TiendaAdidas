void FuncionMouse(WINDOW *win, int n_choices, char *choices[], int startx, int starty, int ordven, int n_opcion);

void print_menu(WINDOW *menu_win, int highlight, char *choices[], int n_choices, int stax, int stay, int ordvent, int n_opc)
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
  FuncionMouse(menu_win, n_choices, choices, stax, stay, ordvent, n_opc);


}

