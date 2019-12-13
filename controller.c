#include "controller.h"
#include "computer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* f = NULL;
    int todoOk = 0;
    char buffer [4][30];
        if( pArrayListEmployee == NULL)
    {
        printf("No se pudo conseguir memoria\n");
        return todoOk;
    }

    f = fopen(path, "r");
    if( f == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        system("pause");
        return todoOk;
    }else {
    fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    parser_ComputerFromText(f, pArrayListEmployee);
    todoOk = 1;
    }

    fclose(f);

    return todoOk;
}

int parser_ComputerFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    int todoOk = 0;
    int tam = 0;
    int cant = 0;
    char buffer[5][30];
    eComputer* auxComputer;

    while( !feof(pFile) )
    {
        cant =  fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
        if( cant < 4)
        {
            return 0;
        }
        else
        {
            auxComputer = computer_newParam(buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
            if(auxComputer != NULL)
            {
                ll_add(pArrayListEmployee, auxComputer);
                todoOk = 1;
            }
        }
    }
}
