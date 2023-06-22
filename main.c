#include <stdio.h>
#include "parcial.h"

int main() {
    Node * list = NULL;
    insertar(&list, newNode(1));
    insertar(&list, newNode(2));
    insertar(&list, newNode(3));

    printf("Lista original:\n");
    printear(&list);

    Node * inverted = NULL;
    insertar(&inverted, invertir(&list));
    insertar(&inverted, invertir(&list));
    insertar(&inverted, invertir(&list));
    printf("Nueva lista invertida\n");
    printear(&inverted);
    return 0;
}
