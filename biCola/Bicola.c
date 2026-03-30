#include <stdio.h>
#include "bicola.h"

Bicola* crear_bicola()
{
    return lista_crear();
}

bool bicola_empty(Bicola* b)
{
    return lista_vacia(b);
}

void bicola_push_frente(Bicola* b, int dato)
{
    lista_insertar_head(b, dato);
}

void bicola_push_final(Bicola* b, int dato)
{
    lista_insertar_tail(b, dato);
}

int bicola_pop_frente(Bicola* b)
{
    return lista_eliminar_head(b);
}

int bicola_pop_final(Bicola* b)
{
    return lista_eliminar_tail(b);
}

int bicola_frente(Bicola* b)
{
    if (lista_vacia(b)) return -1;
    return b->head->dato;
}

int bicola_final(Bicola* b)
{
    if (lista_vacia(b)) return -1;
    return b->tail->dato;
}

void vaciar_bicola(Bicola* b)
{
    while (!lista_vacia(b)) {
        lista_eliminar_head(b);
    }
}

void destruir_bicola(Bicola* b)
{
    lista_destruir(b);
}
