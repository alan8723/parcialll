#ifndef COMPUTER_H_INCLUDED
#define COMPUTER_H_INCLUDED
typedef struct{
    int id;
    char descripcion[50];
    float precio;
    int idTipo;
    int oferta;
}eComputer;
eComputer* computer_new();
eComputer* computer_newParam(char* id, char* descripcion, char* precio, char* idTipo, char* oferta);


#endif // COMPUTER_H_INCLUDED
