void ventanaCompras();
void aregarCarrito(int choice);
void agregar();

char *opciones[15];
char *base[13];

void agregar()
{
	int i;
	for(i = 0; i<13; i++)
		opciones[i] = "Agregar";
		
	for(i = 0; i<13; i++)
		base[i] = "Adizero_Boston_9 Mujer 5 Rosa 1959.3";
				
	opciones[13] = "Ir al carrito";
	opciones[14] = "Cerrar Sesion";	

}

WINDOW *area_compras, *area_opc, *agregado;

void ventanaCompras()
{
 	
	int alto = 25, ancho = 60;
	int starx = 0;
	int stary = 6;
	char *usuario = malloc(sizeof(char)*32);
	char *contra = malloc(sizeof(char)*32);

	area_compras = newwin(alto, ancho, stary, starx-starx);
	area_opc = newwin(alto, ancho-ancho+20, stary, 55);
	agregar();
	//Imprimimos ventana de compras
	print_cata(area_compras, 1, base, 13);
	wrefresh(area_compras);
	refresh();
	//void print_menu(WINDOW *menu_win, int highlight, char *choices[], int n_choices, int stax, int stay, int ordvent, int n_opc)
	print_menu(area_opc,1, opciones,15, 55, stary, 1, 15);
	wrefresh(area_opc);
	refresh();
	

	//Ventana de opciones
}

void agregarCarrito(int choice)
{
	agregado = newwin(4, 60, 1, 0);
	box(agregado, 0, 0);
	mvwprintw(agregado, 1, 0,"Producto %d agregado",choice);
	wrefresh(agregado);
	refresh();
	sleep(5);
	ventanaCompras();
	
}





