#include "TListaJ.h"

TLista::TLista() {
    Primero = nullptr;
    Ultimo = nullptr;
    Cursor = nullptr;
}

void TLista::inicializar() {
    Primero = nullptr;
    Ultimo = nullptr;
    Cursor = nullptr;
}

bool TLista::Vacia() {
    return Primero == nullptr;
}

void TLista::Insertar(TNodo^ nodo) {
    if (Vacia()) {
        Primero = nodo;
        Ultimo = nodo;
        Cursor = nodo;
        nodo->pEnlaceAtras = Ultimo;
        nodo->pEnlaceAdelante = Primero;
    }
    else {
        Ultimo->pEnlaceAdelante = nodo;
        nodo->pEnlaceAtras = Ultimo;
        Ultimo = nodo;
        Cursor = nodo;
        Primero->pEnlaceAtras = nodo;
        nodo->pEnlaceAdelante = Primero;
    }
}

TNodo^ TLista::Eliminarprimero() {
    if (Vacia())
        return nullptr;
    else {
        if (Primero == Ultimo)  //si cumple es que un solo elemento
            inicializar();
        else {
            if (Cursor == Primero) {
                Cursor = Primero->pEnlaceAdelante;
                Primero = Primero->pEnlaceAdelante;
                Primero->pEnlaceAtras = Ultimo;
                Ultimo->pEnlaceAdelante = Primero;
            }
        }
        return Primero;
    }
}

TNodo^ TLista::Eliminar() {
    TNodo^ pTemp;
    TNodo^ qTemp;
    if (Cursor == nullptr)
        return nullptr;
    else {
        if (Cursor == Primero)
            return Eliminarprimero();
        else {
            pTemp = getAntCursor();
            qTemp = getProxCursor();
            if (Cursor == Ultimo) {
                Ultimo = pTemp;
                Cursor = pTemp;
                Ultimo->pEnlaceAdelante = Primero;
                Primero->pEnlaceAtras = Ultimo;
            }
            else {
                pTemp->pEnlaceAdelante = Cursor->pEnlaceAdelante;
                qTemp->pEnlaceAtras = Cursor->pEnlaceAtras;
                Cursor = pTemp->pEnlaceAdelante;
            }
            return Cursor;
        }
    }
}

TNodo^ TLista::getPrimero() {
    return Primero;
}

TNodo^ TLista::getUltimo() {
    return Ultimo;
}

TNodo^ TLista::getCursor() {
    return Cursor;
}

TNodo^ TLista::getProxCursor() {
    return Cursor->pEnlaceAdelante;
}

TNodo^ TLista::getAntCursor() {
    return Cursor->pEnlaceAtras;
}

void TLista::setCursor(TNodo^ p) {
    Cursor = p;
}

TListaJ::TListaJ() { }

void TListaJ::crearLista(int Brigada, int ID, String^ Nombre) {
    Insertar(gcnew TNodoJ(Brigada, ID, Nombre));
}

bool TListaJ::BuscarBrigada(int nB) {
    TNodoJ^ p;
    bool aux = false;
    p = (TNodoJ^)getPrimero();
    while (p != nullptr) {
        if (p->getNBrigada() == nB) {
            aux = true;
            Cursor = p;
            break;
        }
        p = (TNodoJ^)p->pEnlaceAdelante;
    }
    return aux;
}

int TListaJ::contarTrabajador(int nB) {
    TNodoJ^ p;
    TNodoTrabajador^ q;
    int aux = 0;

    BuscarBrigada(nB);
    p = (TNodoJ^)getCursor();
    q = (TNodoTrabajador^)p->TListaTrabajador->getPrimero();
    while (true) {
        if (q == p->TListaTrabajador->Ultimo) {
            return aux;
        }
        else {
            q = (TNodoTrabajador^)q->pEnlaceAdelante;
            aux++;
        }
    }
}

TNodoJ^ TListaJ::getAnterior(int nB) {
    if (BuscarBrigada(nB))
        return (TNodoJ^)getAntCursor();
    else
        return nullptr;
}

TNodoJ^ TListaJ::getPosterior(int nB) {
    if (BuscarBrigada(nB))
        return (TNodoJ^)getProxCursor();
    else
        return nullptr;
}

void TListaJ::InsertarTrab(int nB, int i, String^ n, String^ o) {
    TNodoJ^ p = gcnew TNodoJ();

    if (BuscarBrigada(nB)) {
        p = (TNodoJ^)getCursor();
        p->TListaTrabajador->Insertar(gcnew TNodoTrabajador(i, n, o));
    }
    else {
        MessageBox::Show("no se existe el numero de brigada que introdujo");
    }
}

void TListaJ::EliminarTrab(int nB, int NId) {
    TNodoJ^ p;
    TNodoTrabajador^ q;
    BuscarBrigada(nB);
    p = (TNodoJ^)getCursor();
    q = (TNodoTrabajador^)p->TListaTrabajador->getPrimero();
    while (true) {
        if (q->ID == NId) {
            p->TListaTrabajador->Cursor = q;
            break;
        }
        else {
            q = (TNodoTrabajador^)q->pEnlaceAdelante;
        }
    }
    p->TListaTrabajador->Eliminar();
}

void TListaJ::MostrarTrab(int nB, DataGridView^ dgv) {
    TNodoJ^ p;
    TNodoTrabajador^ q;
        int w;
    int n, i;

    n = dgv->RowCount - 1;

    BuscarBrigada(nB);
    p = (TNodoJ^)getCursor();
    q = (TNodoTrabajador^)p->TListaTrabajador->getPrimero();

    w = contarTrabajador(nB);

    dgv->Rows->Clear();
    for (i = 0; i <= w; i++) {
        if (q == nullptr)
            break;
        else {
            dgv->Rows->Add();
            dgv->Rows[i]->Cells[0]->Value = q->getID();
            dgv->Rows[i]->Cells[1]->Value = q->getNombre();
            dgv->Rows[i]->Cells[2]->Value = q->getOficio();
            q = (TNodoTrabajador^)q->pEnlaceAdelante;
        }
    }
}

bool TListaJ::EliminarLista() {
    if (getCursor() != nullptr) {
        Eliminar();
        return true;
    }
    else {
        return false;
    }
}