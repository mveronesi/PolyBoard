#ifndef GIOCO_H
#define GIOCO_H
#include "scacchiera.hpp"
#include "smartp.h"
#include <iostream>
#include <string>
using std::cout; using std::endl;

class Gioco
{
protected:
    Scacchiera<SmartP> tavolo;
    Colore giocatore_corrente;
public:
    Gioco(int _width, int _heigth, Colore giocatore_iniziale);
    virtual ~Gioco(){}
    void stampaTavolo() const;
    virtual char tipoGioco() const = 0;
    virtual bool mossa(const Posizione& posIniziale, const Posizione& posFinale) = 0;
    virtual void cambioTurno() = 0;
    virtual bool controlloVincitore() const = 0;
};
#endif