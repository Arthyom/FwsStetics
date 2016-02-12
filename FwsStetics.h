#ifndef FWSSTETICS_H
#define FWSSTETICS_H

    /********************************************************************************/
    /*******************      libreria de elementos esteticos     *******************/
    /********************************************************************************/

    # include <stdio.h>
    # include <stdlib.h>
    # include <string.h>
    # include <stdarg.h>

    # define FWS_DlatSDC  187
    # define FWS_DlatSIC  201
    # define FWS_DlatC    186

    # define FWS_DlatIDC  188
    # define FWS_DlatIIC  200

    # define FWS_Dlin     205

    /***************************************************************/
    /******************* prototipo y declaracion *******************/
    /***************************************************************/
void    FwsSttcsDSalto  ( int numeroSaltos ){
    int i;
    for ( i = 0 ; i < numeroSaltos ; i ++ )
        printf("\n");
}

void    FwsSttcsDrect   ( int espacios, char * textoInterior, char carSup, char carInf, char carDer, char CarIzq ){
    // dibujar un rectangulo

        // poner espacios
        int i,j,k;
        for ( i = 0 ; i < espacios ; i++ )
            printf(" ");

        // poner carSup
        for ( j = 0 ; j < strlen(textoInterior)+4; j++ )
            printf("%c",carSup);

        FwsSttcsDSalto(1);


        // poner espacios
        for ( i = 0 ; i < espacios ; i++ )
            printf(" ");

        // poner texto y laterales
        printf("%c %s %c ", CarIzq, textoInterior, carDer);
         FwsSttcsDSalto(1);

        // poner espacios
        for ( i = 0 ; i < espacios ; i++ )
        printf(" ");

        // poner carinf
        for ( j = 0 ; j < strlen(textoInterior)+ 4; j++ )
            printf("%c",carInf);

         FwsSttcsDSalto(1);
}

void    FwsSttcsDrect4  ( int espacios, char * textoInterior, char carSup, char carInf, char latCar, char copSupIzq, char copSupDer, char copInfIzq, char copInfDer){
    // dibujar una caja cimetrica

        // poner espacios
        int i,j,k;
        for ( i = 0 ; i < espacios ; i++ )
            printf(" ");

        // poner carSup
        for ( j = 0 ; j < strlen(textoInterior)+4; j++ ){
            if ( j == 0 )
                printf("%c",copSupIzq);
            else {
                if (j == strlen(textoInterior)+3)
                    printf("%c",copSupDer);
                else
                    printf("%c",carSup);

            }
        }
        FwsSttcsDSalto(1);


        // poner espacios
        for ( i = 0 ; i < espacios ; i++ )
            printf(" ");

        // poner texto y laterales
        printf("%c %s %c ", latCar, textoInterior, latCar);
        FwsSttcsDSalto(1);

        // poner espacios
        for ( i = 0 ; i < espacios ; i++ )
        printf(" ");

        // poner carSup
        for ( j = 0 ; j < strlen(textoInterior)+4; j++ ){
            if ( j == 0 )
                printf("%c",copInfIzq);
            else {
                if (j == strlen(textoInterior)+3)
                    printf("%c",copInfDer);
                else
                    printf("%c",carInf);

            }
        }
        FwsSttcsDSalto(1);

}

void    FwsSttcsDblank  ( int espacios, char * textoEntrada){

    int i;
    for ( i = 0 ; i < espacios ; i ++ )
        printf(" ");

    printf("%s",textoEntrada);
    FwsSttcsDSalto(1);

}

void    FwsSttcsDEsp    ( int espacios){
    int i ;
    for (i = 0 ; i < espacios ; i ++ )
        printf(" ");
}

int     FwsSttcsDmenu   ( int dims, ...){
    // dibujar un menu para cualqier cantidad de parametros
    int i,opcion;
    printf(" \t \t Seleccione una opcion del menu \n \n");
    va_list listaArgs;
    va_start(listaArgs,dims);
    for ( i = 0 ;i < dims ; i ++ ){
        printf(" \t \t \t [%d]  %s \n", i+1 , va_arg(listaArgs, char * ));
    }
    scanf("%d",&opcion);
    return opcion;
}

void    FwsSttcsDdoble  ( int esp, char * txtIn ){
    // dibujar un cuadro doble con salto de linea para el texto especificado
    FwsSttcsDrect4(esp,txtIn,FWS_Dlin,FWS_Dlin,FWS_DlatC,FWS_DlatSIC,FWS_DlatSDC,FWS_DlatIIC, FWS_DlatIDC);

}

#endif // FWSSTETICS_H
