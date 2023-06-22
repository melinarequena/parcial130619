//
// Created by Administrador on 22/6/2023.
//

#ifndef PARCIAL130619_PARCIAL_H
#define PARCIAL130619_PARCIAL_H

typedef struct node{
    int data;
    struct node * next;
}Node;

Node * newNode(int data);
void insertar(Node ** cab, Node * node);
void printear(Node ** cab);
void eliminar(Node ** cab);

#endif //PARCIAL130619_PARCIAL_H
