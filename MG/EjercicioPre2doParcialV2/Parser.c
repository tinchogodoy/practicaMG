#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"
#include "ArrayList.h"


/*
int parser_newParserBlackList(char*fileName, ArrayList* listaEmpleados)
{

    FILE* pFile = NULL;
    int auxReturn = -1;
    int id;
    char nombre[128];
    int horasTrabajadas;
    Empleado* auxEmpleado;
    pFile = fopen(fileName,"r");
    if(pFile!=NULL && listaEmpleados!=NULL && fileName!=NULL)
    {
        auxReturn = 0;
        while(!feof(pFile))
        {
            fscanf(pFile, "%[^,],%[^,],%[^\n]\n", id, nombre, horasTrabajadas);
            //printf("\n%s-%s", nombre, horas);
            auxEmpleado = em_new();
            em_setId(auxEmpleado, id);
            em_setNombre(auxEmpleado, nombre);
            em_setHorasTrabajadas(auxEmpleado, horasTrabajadas);
            al_add(listaEmpleados, auxEmpleado);

        }
        fclose(pFile);
    }
    return auxReturn;
}*/
int parser_parseEmpleados(char* path, ArrayList* listaEmpleados)
{
    char bId[4096];
    char bNombre[4096];
    char bHorasTrabajadas[4096];
    /*char bDni[4096];
    char bApellido[4096];
    char bDni[4096];
    char bEmail[4096];
    char bGenero[4096];
    char bProfesion[4096];
    char bNacionalidad[4096];
    char bUsuario[4096];*/

    Empleado* auxEmpleado;
    FILE* pFile;
    int retorno = -1;
    pFile = fopen(path,"r");
    if(pFile != NULL)
    {
        retorno = 1;
        fscanf(pFile," %[^,],\
                %[^,],%[^\n]\n",
                    bId,
                    bNombre,
                    bHorasTrabajadas
                   /* bDni
                    bEmail,
                    bGenero,
                    bProfesion,
                    bUsuario,
                    bNacionalidad*/
                    );

        while(!feof(pFile))
        {
            fscanf(pFile,"  %[^,],\
                            %[^,],%[^\n]\n",
                                bId,
                                bNombre,
                                bHorasTrabajadas
                              /*  bDni,
                                bEmail,
                                bGenero,
                                bProfesion,
                                bUsuario,
                                bNacionalidad*/
                                );

            auxEmpleado = em_newParametros(     atoi(bId),
                                                bNombre,
                                                atoi(bHorasTrabajadas)
                                            /*  bEmail,
                                                bGenero,
                                                bProfesion,
                                                bNacionalidad,
                                                bUsuario,*/
                                                );

            al_add(listaEmpleados,auxEmpleado);
        }
        fclose(pFile);
    }

    printf("\n archivo cargado!\n");
    return retorno;
}
int parser_listarEmpleados(ArrayList* listaEmpleados)
{
    int retorno = -1;
    int i;
    int id;
    char nombre[128];
    int horasTrabajadas;

    Empleado* auxEmpleado;

   // char email[256];
   // char genero;
   // char profesion[256];
   // char nacionalidad[256];
  //  char usuario[64];
    //printf("\nId_cliente\tNombre_cliente\tApellido_cliente\tDni_cliente\n");
    for(i=0;i<al_len(listaEmpleados);i++)
    {
        auxEmpleado = al_get(listaEmpleados,i);
        em_getId(auxEmpleado,&id);
        em_getNombre(auxEmpleado,nombre);
        em_getHorasTrabajadas(auxEmpleado,&horasTrabajadas);

        printf("\n%d %s %d",id, nombre, horasTrabajadas);
    }
    return retorno;
}
