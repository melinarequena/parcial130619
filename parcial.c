//
// Created by Administrador on 22/6/2023.
//

#include "parcial.h"

int hash(char * string) {
    int sum=0;
    for(int i=0; string[i]!='\0'; i++){
        sum = sum + string[i];
    }
    return sum%4; /*4 es cantidad de clases*/
}
