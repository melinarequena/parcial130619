#include <stdio.h>
#include "parcial.h"

int main() {
    char * nom[]={"Sofi", "Meli", "Juani", "Nacho"};
    int cant = sizeof(nom)/sizeof(char *);
    for(int i=0; i<cant; i++){
        printf("%s: %d\n", nom[i], hash(nom[i]));
    }
    return 0;
}
