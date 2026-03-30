#include "pila.h"
#include "lista.h"
#include "nodo.c"
#include <stdio.h>
#include <stdlib.h>

Pila* pila_crear()
{
   return lista_crear();
}

bool pila_vacia(Pila* pila)
{
    return lista_vacia(pila);
}

void pila_push(Pila* pila, int dato)
{
    return lista_insertar_tail(pila, dato);
}

int pila_pop(Pila* pila)
{
    return lista_eliminar_tail(pila);
}

int pila_top(Pila* pila)
{
    if(pila==NULL || pila->tail == NULL)
     return -1;
    return pila->tail->dato;
}

void pila_destruir(Pila* pila)
{
    lista_detruir(pila);
}
