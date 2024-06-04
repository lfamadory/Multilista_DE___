#include "TNodo.h"
#include "TListaJ.h"

TNodo::TNodo() {
    pEnlaceAdelante = nullptr;
    pEnlaceAtras = nullptr;
}

TNodoTrabajador::TNodoTrabajador(int iden, String^ nomb, String^ oficio) {
    ID = iden;
    Nombre = nomb;
    Oficio = oficio;
}

int TNodoTrabajador::getID() {
    return ID;
}

String^ TNodoTrabajador::getNombre() {
    return Nombre;
}

String^ TNodoTrabajador::getOficio() {
    return Oficio;
}

TNodoJ::TNodoJ() {
    TListaTrabajador = gcnew TListaJ();
}

TNodoJ::TNodoJ(int nbrig, int id, String^ nombrigada) {
    NBrigada = nbrig;
    ID = id;
    Nombre = nombrigada;
    TListaTrabajador = gcnew TListaJ();
}

int TNodoJ::getID() {
    return ID;
}

String^ TNodoJ::getNombre() {
    return Nombre;
}

int TNodoJ::getNBrigada() {
    return NBrigada;
}