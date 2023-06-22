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

void eliminar(Node **cab) {
    if((*cab)== NULL){
        printf("Lista vacia\n");
    }else{
        Node * aux = (*cab);
        Node * act = NULL;
        while (aux != NULL){
            act = (*cab)->next;
            while(act != NULL){
                Node * ant = NULL;
                while (act->data != aux->data){
                    ant = act;
                    act = act->next;
                }
                if(act->data == aux->data){
                    if(act->next == NULL){
                        ant->next = NULL;
                        free(act);
                    }else{
                        ant->next = act->next;
                        free(act);
                    }
                    if(ant->next != NULL){
                        act = ant->next;
                    }
                }
            }
            aux = aux ->next;
        }
    }
}

