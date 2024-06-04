#pragma once

using namespace System;
ref class TListaJ;

public ref class TNodo {
public:
    TNodo^ pEnlaceAdelante;
    TNodo^ pEnlaceAtras;

    TNodo();
};

public ref class TNodoTrabajador : public TNodo {
public:
    int ID;
    String^ Nombre;
    String^ Oficio;

    TNodoTrabajador(int iden, String^ nomb, String^ oficio);
    int getID();
    String^ getNombre();
    String^ getOficio();
};

public ref class TNodoJ : public TNodo {
private:
    int ID;
    int NBrigada;
    String^ Nombre;
public:
    TListaJ^ TListaTrabajador;

    TNodoJ();
    TNodoJ(int nbrig, int id, String^ nombrigada);
    int getID();
    String^ getNombre();
    int getNBrigada();
};