#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED
#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
int parser_ComputerFromText(FILE* pFile , LinkedList* pArrayListEmployee);

#endif // CONTROLLER_H_INCLUDED
