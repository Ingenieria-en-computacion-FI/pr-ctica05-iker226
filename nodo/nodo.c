#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo* nuevo= (Nodo*)malloc(sizeof(Nodo));
    if(nuevo!=NULL){
        nuevo->dato=dato;
        n->siguiente=NULL;
    }
    return nuevo;
}

void nodo_destruir(Nodo* nodo)
{
    if(nodo!=NULL){
        free(nodo);
    }
}
