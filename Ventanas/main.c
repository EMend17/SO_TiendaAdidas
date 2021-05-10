#include<ncurses.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include "ImprimAdid.h"
#include "ImpVentana.h"
#include "ImprimCatalogo.h"
#include "VentanaCarrito.h"
#include "VentanaCompras.h"
#include "VentanaLogin.h"
#include "ventana.h"


#define ALTO 15
#define ANCHO 30

//TODAS MIS VENTANAS

										
int main()
{

	initscr();
  	clear();
  	noecho();
 	cbreak();
	
	imprimirAdidas();	
	ventanaLogin();
	
	
	return 0;
  	
}

