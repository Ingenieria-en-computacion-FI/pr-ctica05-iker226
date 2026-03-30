#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H

#include <stdbool.h>
#include "lista.h"

typedef Lista ColaCircular;

ColaCircular* crear_colacircular();

bool colacircular_empty(ColaCircular* cola);

void vaciar_colacircular(ColaCircular* cola);

void colacircular_enqueue(ColaCircular* cola, int dato);

int colacircular_dequeue(ColaCircular* cola);

int colacircular_frente(ColaCircular* cola);

int colacircular_final(ColaCircular* cola);

void destruir_colacircular(ColaCircular* cola);

#endif
