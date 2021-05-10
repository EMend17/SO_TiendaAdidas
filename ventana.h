void report_choice(int mouse_x, int mouse_y, int *p_choice, int n_choices, char *choices[], int startx, int starty);
void SelVentana(int opcion, int bandera);

void FuncionMouse(WINDOW *win, int n_choices, char *choices[], int startx, int starty, int ordven, int n_opcion)
{
	int c, choice = 0;
	initscr();
  	clear();
  	noecho();
 	cbreak();
 	
 	MEVENT event;
 	keypad(win, TRUE );
  	mousemask(ALL_MOUSE_EVENTS, NULL);
  	
  	while(1)
  	{
  		c = wgetch(win);//El que selecciona la ventana
  		
  		switch(c)
  		{
  			case KEY_MOUSE:
  				if(getmouse(&event) == OK)
  				{
  					if(event.bstate & BUTTON1_PRESSED)
  					{
  						report_choice(event.x, event.y , &choice, n_choices, choices, startx, starty);
  						
						switch(ordven)//Orden de la ventana en la que va
						{
							case 1: //Ventana de compras
								if(choice == -1)
									ventanaLogin();
								
								else if(choice == n_opcion - 1)//Opcion ir al carrito
									ventanaCarritos();
								
								else
									agregarCarrito(choice);
								
								
								break;
						
						}

  						refresh();
  						
  					}
  				}

  				break; 		
  		}  	
  	}
  	end:
  		endwin(); 

}


void report_choice(int mouse_x, int mouse_y, int *p_choice, int n_choices, char *choices[], int startx, int starty)
{ 
  int i,j, choice;

  i = startx + 2;
  j = starty + 2;

  for(choice = 0; choice < n_choices; ++choice)
    if(mouse_y == j + choice && mouse_x >= i && mouse_x <= i + strlen(choices[choice]))
      { 
      
      	if(choice == n_choices - 1)
        	*p_choice = -1;
        else
          *p_choice = choice + 1;
        break;
      }
}








