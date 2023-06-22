#include <stdio.h>
#include "parcial.h"

int main() {
    Node * list = NULL;
    insertar(&list, newNode(1));
    insertar(&list, newNode(2));
    insertar(&list, newNode(3));
    insertar(&list, newNode(2));
    insertar(&list, newNode(4));
    insertar(&list, newNode(64));
    insertar(&list, newNode(6));

    printf("Lista original:\n");
    printear(&list);

    eliminar(&list);
    printear(&list);
    return 0;
}
