//
// Created by Administrador on 22/6/2023.
//

#include "parcial.h"
#include <stdlib.h>
#include <stdio.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error en la asignacion de memoria\n");
        exit (-1);
    }
    aux->next = NULL;
    aux->data = data;
    return aux;
}

void insertar(Node **cab, Node *node) {
    if((*cab) == NULL){
        (*cab) = node;
    }else{
        Node * aux = (*cab);
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
    }
}

void printear(Node **cab) {
    Node * aux = (*cab);
    while(aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
}

Node *invertir(Node **cab) {
    Node * aux = (*cab);
    Node * ant = NULL;
    if(aux == NULL){
        return NULL;
    }else{
        while (aux->next != NULL){
            ant = aux;
            aux = aux->next;
        }
        if(ant != NULL){
            ant->next = NULL;
        }
        return aux;
    }


}
