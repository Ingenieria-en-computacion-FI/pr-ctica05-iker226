#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
    Lista* lista=(Lista*)malloc(sizeof(lista));
    if(lista==NULL){
        return NULL;
    }
    lista->head=NULL;
    lista->tail=NULL;
    return lista;
}

int lista_vacia(Lista* lista)
{
    return (lista->head && lista->tail == NULL);
}

void lista_insertar_head(Lista* lista, int dato)
{
    Nodo* nuevo= nodo_crear(dato);
    if(lista->head==NULL){
        lista->head=lista->tail=nuevo;
    }else{
        nuevo->siguiente = lista->head;
        lista->head=nuevo;
    }
}

void lista_insertar_tail(Lista* lista, int dato)
{
    Nodo* nuevo= nodo_crear(dato);
    if(lista->head==NULL){
        lista->head=lista->tail=nuevo;
    }else{
        lista->tail->siguiente=nuevo;
        lista->tail = nuevo;
    }
}

int lista_eliminar_head(Lista* lista)
{
    if(lista->head==NULL)
     return -1;
    Nodo* eliminar= lista->head;
    int dato= eliminar->dato;
    lista->head= eliminar->siguiente;
    if(lista->head==NULL){
        lista->tail=NULL;
    }
    nodo_destruir(eliminar);
    return dato;
}

int lista_eliminar_tail(Lista* lista)
{
    if(lista->head==NULL)
     return -1;
    if(lista->head==lista->tail){
        int dato= lista->head->dato;
        nodo_destruir(lista->head);
        lista->head=lista->tail=NULL;
        return dato;
    }
    Nodo*nuevo= lista->head;
    while(nuevo->siguiente!=lista->tail){
        nuevo=nuevo->siguiente;
    }
    int dato= lista->tail->dato;
    nodo_destruir(lista->tail);
    lista->tail=nuevo;
    lista->tail->siguiente=NULL;
    return dato;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    if(lista!=NULL){
        while(lista->head!=NULL){
            lista_eliminar_head(lista);
        }
        free(lista);
    }
}
