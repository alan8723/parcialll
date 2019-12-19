#include <stdio.h>
#include <stdlib.h>
#include "parcer.h"
#include "computer.h"

int parser_ComputerFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    int todoOk = 0;
    int tam = 0;
    int cant = 0;
    char buffer[5][30];
    eComputer* auxComputer;
    system("pause");
    while( !feof(pFile) )
    {
    system("pause");
        cant =  fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);

        if( cant < 5)
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
