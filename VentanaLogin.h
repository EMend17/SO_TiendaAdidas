char *menu_opci[] = {
						"Aceptar",
						"Salir"
					};
					
void ventanaLogin();
int n_menu = sizeof(menu_opci)/ sizeof(char *);

void ventanaLogin()
{
	initscr();
  	clear();
  	noecho();
 	cbreak();

	 imprimirAdidas();

	int alto = 15, ancho = 50, alto_op = 3;
	int starx = (80 - ancho)/2;
	int stary = (24 - alto)/2;
	char *usuario = malloc(sizeof(char)*32);
	char *contra = malloc(sizeof(char)*32);

	WINDOW *win = newwin(alto, ancho, stary+2, starx);
	box(win, 0, 0);
	mvwprintw(win,stary+1, starx, "Bienvenido");
	mvwprintw(win,stary+3, starx-starx + 1, "Introduzca su nombre de usuario:");
	refresh();
	wrefresh(win);
	keypad(win,true);
	wscanw(win, "%s", usuario);
	refresh();
	wrefresh(win);
	mvwprintw(win,stary+4, starx-starx+1, "Introduzca su contraseña:");
	refresh();
	wrefresh(win);
	wscanw(win, "%s",contra);//Termina primera ventana	
	endwin();
	//wrefresh(opciones);
	//print_menu(opciones, 1, menu_opci, n_menu, stary+15, starx,1);
	
	if(strcmp(usuario, "carlos") == 0 && strcmp(contra, "perro") == 0)
		//Funcion que va al apartado del cliente
		ventanaCompras();
		
	
	else
	{
		mvprintw(stary + 15, starx, "Verifique que haya introducido los datos correctamente");
		refresh();
		sleep(5);
		ventanaLogin();
	}




}
