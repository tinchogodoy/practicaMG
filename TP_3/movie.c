#include "movie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

EMovie* movie_new()
{
    EMovie* this;
    this=malloc(sizeof(EMovie));
    return this;
}

void movie_delete(EMovie* this)
{
    free(this);
}

int movie_setIdMovie(EMovie* this,int idMovie)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->idMovie=idMovie;
        retorno=0;
    }
    return retorno;
}

int movie_getIdMovie(EMovie* this,int* idMovie)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *idMovie=this->idMovie;
        retorno=0;
    }
    return retorno;
}

int movie_setTitulo(EMovie* this,char* titulo)
{
    int retorno=-1;
    if(this!=NULL && titulo!=NULL)
    {
        strcpy(this->titulo,titulo);
        retorno=0;
    }
    return retorno;
}

int movie_getTitulo(EMovie* this,char* titulo)
{
    int retorno=-1;
    if(this!=NULL && titulo!=NULL)
    {
        strcpy(titulo,this->titulo);
        retorno=0;
    }
    return retorno;
}

int movie_setGenero(EMovie* this,char* genero)
{
    int retorno=-1;
    if(this!=NULL && genero!=NULL)
    {
        strcpy(this->genero,genero);
        retorno=0;
    }
    return retorno;
}

int movie_getGenero(EMovie* this,char* genero)
{
    int retorno=-1;
    if(this!=NULL && genero!=NULL)
    {
        strcpy(genero,this->genero);
        retorno=0;
    }
    return retorno;
}

int movie_setDuracion(EMovie* this,int duracion)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->duracion=duracion;
        retorno=0;
    }
    return retorno;
}

int movie_getDuracion(EMovie* this,int* duracion)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *duracion=this->duracion;
        retorno=0;
    }
    return retorno;
}

int movie_setDescripcion(EMovie* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(this->descripcion,descripcion);
        retorno=0;
    }
    return retorno;
}

int movie_getDescripcion(EMovie* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(descripcion,this->descripcion);
        retorno=0;
    }
    return retorno;
}

int movie_setPuntaje(EMovie* this,int puntaje)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->puntaje=puntaje;
        retorno=0;
    }
    return retorno;
}

int movie_getPuntaje(EMovie* this,int* puntaje)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *puntaje=this->puntaje;
        retorno=0;
    }
    return retorno;
}

int movie_setLinkImagen(EMovie* this,char* linkImagen)
{
    int retorno=-1;
    if(this!=NULL && linkImagen!=NULL)
    {
        strcpy(this->linkImagen,linkImagen);
        retorno=0;
    }
    return retorno;
}

int movie_getLinkImagen(EMovie* this,char* linkImagen)
{
    int retorno=-1;
    if(this!=NULL && linkImagen!=NULL)
    {
        strcpy(linkImagen,this->linkImagen);
        retorno=0;
    }
    return retorno;
}

