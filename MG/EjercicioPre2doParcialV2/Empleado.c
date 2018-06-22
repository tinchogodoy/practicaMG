#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"

int em_calcularSueldo(void* this)
{
    int horasTrabajadas;
    int sueldo;
    em_getHorasTrabajadas(this, &horasTrabajadas);
    if(horasTrabajadas <= 120)
    {
        sueldo= horasTrabajadas*180;
    }else if(horasTrabajadas <= 160)
    {
        sueldo= horasTrabajadas*240;
    }else
    {
        sueldo= horasTrabajadas*360;
    }
    em_setSueldo(this, sueldo);
    return 0;
}

Empleado* em_new()
{
    Empleado* this;
    this=malloc(sizeof(Empleado));
    return this;
}

void em_delete(Empleado* this)
{
    free(this);
}

Empleado* em_newParametros(int id, char* nombre, int horasTrabajadas/*,int sueldo, char* email, char* genero, char* profesion, char* nacionalidad, char* usuario,*/ )
{
    Empleado* auxEmpleado = em_new();
    if(     !em_setNombre(auxEmpleado, nombre)
       &&   !em_setHorasTrabajadas(auxEmpleado, horasTrabajadas)
       //&&   !em_setSueldo(auxEmpleado, sueldo)
    /* &&   !cliente_setEmail(auxEmpleado, email)
       &&   !cliente_setGenero(auxEmpleado, genero[0])
       &&   !cliente_setProfesion(auxEmpleado, profesion)
       &&   !cliente_setNacionalidad(auxEmpleado, nacionalidad)
       &&   !cliente_setUsuario(auxEmpleado, usuario) */
       &&   !em_setId(auxEmpleado, id))
    {
        return auxEmpleado;
    }
    em_delete(auxEmpleado);
    return NULL;
}
/*
int em_setCantidad(Empleado* this,int cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->cantidad=cantidad;
        retorno=0;
    }
    return retorno;
}

int em_getCantidad(Empleado* this,int* cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *cantidad=this->cantidad;
        retorno=0;
    }
    return retorno;
}*/

int em_setNombre(Empleado* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int em_getNombre(Empleado* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}
/*
int em_setDescripcion(Empleado* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(this->descripcion,descripcion);
        retorno=0;
    }
    return retorno;
}

int em_getDescripcion(Empleado* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(descripcion,this->descripcion);
        retorno=0;
    }
    return retorno;
}*/

int em_setHorasTrabajadas(Empleado* this,int horasTrabajadas)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->horasTrabajadas=horasTrabajadas;
        retorno=0;
    }
    return retorno;
}

int em_getHorasTrabajadas(Empleado* this,int* horasTrabajadas)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *horasTrabajadas=this->horasTrabajadas;
        retorno=0;
    }
    return retorno;
}

int em_setSueldo(Empleado* this,int sueldo)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        retorno=0;
    }
    return retorno;
}

int em_getSueldo(Empleado* this,int* sueldo)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *sueldo=this->sueldo;
        retorno=0;
    }
    return retorno;
}
/*
int em_setCategoria(Empleado* this,char categoria)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->categoria=categoria;
        retorno=0;
    }
    return retorno;
}

int em_getCategoria(Empleado* this,char* categoria)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *categoria=this->categoria;
        retorno=0;
    }
    return retorno;
}*/

int em_setId(Empleado* this,int id)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->id=id;
        retorno=0;
    }
    return retorno;
}

int em_getId(Empleado* this,int* id)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *id=this->id;
        retorno=0;
    }
    return retorno;
}


/*
int em_setPrueba(Empleado* this,int prueba)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->prueba=prueba;
        retorno=0;
    }
    return retorno;
}

int em_getPrueba(Empleado* this,int* prueba)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *prueba=this->prueba;
        retorno=0;
    }
    return retorno;
}

int em_setEmail(Empleado* this, char* email)
{
    int auxRetorno = -1;
    if(this!=NULL && email!=NULL)
    {
        strcpy(this->email,email);
        auxRetorno = 0;
    }
    return auxRetorno;
}

int em_getEmail(Empleado* this, char* email)
{
    int auxRetorno = -1;
    if(this!=NULL && email!=NULL)
    {
        strcpy(email,this->email);
        auxRetorno = 0;
    }
    return auxRetorno;
}*/
