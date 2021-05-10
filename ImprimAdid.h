void imprimirAdidas();

void imprimirAdidas()
{
 
 char di = 92;

mvprintw(0, 0, "           _ _     _           ");
mvprintw(1, 0, "  __ _  __| (_) __| | __ _ ___ ");
mvprintw(2, 0, " / _` |/ _` | |/ _` |/ _` / __|");
mvprintw(3, 0, "| (_| | (_| | | (_| | (_| %c__%c",di,di);
mvprintw(4, 0, " %c__,_|%c__,_|_|%c__,_|%c__,_|___/",di,di,di,di);
refresh();

}

