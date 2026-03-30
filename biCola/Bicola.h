#ifndef BICOLA_H
#define BICOLA_H

#include <stdbool.h>
#include "lista.h"

typedef Lista Bicola;

Bicola* crear_bicola();

bool bicola_empty(Bicola* b);

void bicola_push_frente(Bicola* b, int dato);

void bicola_push_final(Bicola* b, int dato);

int bicola_pop_frente(Bicola* b);

int bicola_pop_final(Bicola* b);

int bicola_frente(Bicola* b);

int bicola_final(Bicola* b);

void vaciar_bicola(Bicola* b);

void destruir_bicola(Bicola* b);

#endif
