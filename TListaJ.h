#pragma once

#include "TNodo.h"

using namespace System::Windows::Forms;

public ref class TLista {
public:
    TNodo^ Primero;
    TNodo^ Ultimo;
    TNodo^ Cursor;

    TLista();
    void inicializar();
    bool Vacia();
    void Insertar(TNodo^ nodo);
    TNodo^ Eliminarprimero();
    TNodo^ Eliminar();
    TNodo^ getPrimero();
    TNodo^ getUltimo();
    TNodo^ getCursor();
    TNodo^ getProxCursor();
    TNodo^ getAntCursor();
    void setCursor(TNodo^ p);
};

public ref class TListaJ : public TLista {
public:
    TListaJ();
    void crearLista(int Brigada, int ID, String^ Nombre);
    bool BuscarBrigada(int nB);
    int contarTrabajador(int nB);
    TNodoJ^ getAnterior(int nB);
    TNodoJ^ getPosterior(int nB);
    void InsertarTrab(int nB, int i, String^ n, String^ o);
    void EliminarTrab(int nB, int NId);
    void MostrarTrab(int nB, DataGridView^ dgv);
    bool EliminarLista();
};