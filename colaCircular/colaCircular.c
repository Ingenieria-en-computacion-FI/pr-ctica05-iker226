#include <stdio.h>
#include "colacircular.h"

ColaCircular* crear_colacircular()
{
    return lista_crear();
}

bool colacircular_empty(ColaCircular* cola)
{
    return lista_vacia(cola);
}

void vaciar_colacircular(ColaCircular* cola)
{
    while (!lista_vacia(cola)) {
        lista_eliminar_head(cola);
    }
}

void colacircular_enqueue(ColaCircular* cola, int dato)
{
    lista_insertar_tail(cola, dato);
}

int colacircular_dequeue(ColaCircular* cola)
{
    return lista_eliminar_head(cola);
}

int colacircular_frente(ColaCircular* cola)
{
    if (lista_vacia(cola)) return -1;
    return cola->head->dato;
}

int colacircular_final(ColaCircular* cola)
{
    if (lista_vacia(cola)) return -1;
    return cola->tail->dato;
}

void destruir_colacircular(ColaCircular* cola)
{
    lista_destruir(cola);
}
