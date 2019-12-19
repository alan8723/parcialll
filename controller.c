#include "controller.h"
#include "computer.h"
#include "parcer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* f = NULL;
    int todoOk = 0;
    char buffer [5][30];
        if( pArrayListEmployee == NULL)
    {
        printf("No se pudo conseguir memoria\n");
        return todoOk;
    }

    f = fopen(path, "r");
    if( f == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        return todoOk;
    }else {
    fscanf(f, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
    todoOk = parser_ComputerFromText(f, pArrayListEmployee);

    }

    fclose(f);

    return todoOk;
}

