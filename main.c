#include "FwsStetics.h"

int main(void)
{
    // dibujar rectangulo
    FwsSttcsDrect(12,"este es el texto",'_','^','|','|');
    FwsSttcsDrect4(10,"este es otrotexto",'_','^','|','@','@','#','#');
    FwsSttcsDmenu(4,"verificar","ver","imprimir","salir");

    FwsSttcsDdoble(12,"este es un texo");
    return 0;
}
