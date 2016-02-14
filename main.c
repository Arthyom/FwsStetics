#include "FwsStetics.h"

int main(void)
{
    // dibujar rectangulo
    FwsSttcsDrect(12,"este es el texto",'_','^','|','|');
    FwsSttcsDrect4(10,"este es otrotexto",'_','^','|','@','@','#','#');
    FwsSttcsDmenu(4,"verificar","ver","imprimir","salir");

    FwsSttcsDdoble(12,"este es un texo");
    FwsSttcsDsingle(12,"este es un texo");

    FwsSttcsDSubLn(10,"parte uno        parte dos      parte tres     parte cuatro");
    return 0;
}

