#include <iostream>
#include "gioco/scacchi.h"

int main()
{
    Scacchi gioco;

    /*
        NESSUN METODO PLAY IN GIOCO, SARÀ IL MAIN (GUI/CLI) A GESTIRE IL CICLO CON I TURNI RISPETTIVI;
        AD OGNI BUON FINE DI TURNO VERRÀ RICHIAMATO IL METODO DI SCACCO MATTO, CHE NEL CASO DECRETERÀ 
        IL VINCITORE
    */
    bool scaccoMatto(false);
    while(!scaccoMatto)
    {
        bool checkTurno;
        do
        {   
            int xI, yI, xF, yF;
            std::cin >> xI >> yI >> xF >> yF;
            checkTurno = gioco.mossa(Posizione(xI, yI), Posizione(xF, yF));
        } while (!checkTurno);
        gioco.stampaTavolo();
        gioco.controlloVincitore();
    }
    return 0;
}