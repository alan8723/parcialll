#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "computer.h"
#include "controller.h"

int main()
{
    int option = 0;
    LinkedList* computerList = ll_newLinkedList();
    char path[50];

    char salir = 'n';

    /*printf("ingrece nombre de archivo: ");
    scanf("%s", &path);*/

    if(controller_loadFromText("datos_Fin.csv", computerList)){
        printf("exito al cargar");
    }else{
        printf("error al cargar");
    }
}
