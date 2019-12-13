#include "computer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

eComputer* computer_new(){
eComputer* nuevo = (eComputer*) malloc( sizeof(eComputer));
    if( nuevo != NULL)
    {
        nuevo->id = 0;
        strcmp(nuevo->descripcion, " ");
        nuevo->precio = 0;
        nuevo->idTipo = 0;
        nuevo->oferta = 0;
    }
    return nuevo;
}
eComputer* computer_newParam(char* id, char* descripcion, char* precio, char* idTipo, char* oferta){
    eComputer* nuevo = computer_new();
    if( nuevo != NULL)
    {
        if(
            computer_setId(nuevo, atoi(id))
            && computer_setDescripcion(nuevo, descripcion)
            && computer_setprecio(nuevo, atoi(precio))
            && computer_setidTipo(nuevo, atoi(idTipo))
            && computer_setoferta(nuevo, oferta)== 0)
        {
            free(nuevo);
            nuevo = NULL;
        }
    }
    return nuevo;
}

int computer_setId(eComputer* this,int id)
{
    int todoOk=0;
    if( this != NULL)
    {
        this->id = id;
        todoOk = 1;
    }
    return todoOk;
}

int computer_getId(eComputer* this,int* id)
{
    int todoOk=0;
    if( this != NULL && id != NULL)
    {
        strcpy( id, this->id);
        todoOk = 1;
    }
    return todoOk;
}

int computer_setDescripcion(eComputer* this,char* descripcion){
    int todoOk=0;
    if( this != NULL && descripcion != NULL)
    {
        strcpy(this->descripcion, descripcion);
        todoOk = 1;
    }
    return todoOk;
}
int computer_getDescripcion(eComputer* this,char* descripcion){
    int todoOk=0;
    if( this != NULL && descripcion != NULL)
    {
        strcpy(descripcion, this->descripcion);
        todoOk = 1;
    }
    return todoOk;
}

int computer_setprecio(eComputer* this,int precio){
    int todoOk=0;
    if( this != NULL)
    {
        this->precio = precio;
        todoOk = 1;
    }
    return todoOk;
}
/*int computer_getprecio(eComputer* this,int precio){
    int todoOk=0;
    if( this != NULL && precio != NULL)
    {
        strcpy( precio, this->precio);
        todoOk = 1;
    }
    return todoOk;
}*/

int computer_setidTipo(eComputer* this,int idTipo){
    int todoOk=0;
    if( this != NULL)
    {
        this->idTipo = idTipo;
        todoOk = 1;
    }
    return todoOk;
}
int computer_getidTipo(eComputer* this,int* idTipo){
    int todoOk=0;
    if( this != NULL)
    {
        this->idTipo = idTipo;
        todoOk = 1;
    }
    return todoOk;
}

int computer_setoferta(eComputer* this,int oferta){
    int todoOk=0;
    if( this != NULL)
    {
        this->oferta = oferta;
        todoOk = 1;
    }
    return todoOk;
}
int computer_getidoferta(eComputer* this,int* oferta){
    int todoOk=0;
    if( this != NULL)
    {
        this->oferta = oferta;
        todoOk = 1;
    }
    return todoOk;
}
