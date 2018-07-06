#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
typedef struct
{
    int idMovie;
    char titulo[50];
    char genero[50];
    int duracion;
    char descripcion[200];
    int puntaje;
    char linkImagen[400];
}EMovie;

EMovie* movie_new();
void movie_delete();

int movie_setIdMovie(EMovie* this,int idMovie);
int movie_getIdMovie(EMovie* this,int* idMovie);

int movie_setTitulo(EMovie* this,char* titulo);
int movie_getTitulo(EMovie* this,char* titulo);

int movie_setGenero(EMovie* this,char* genero);
int movie_getGenero(EMovie* this,char* genero);

int movie_setDuracion(EMovie* this,int duracion);
int movie_getDuracion(EMovie* this,int* duracion);

int movie_setDescripcion(EMovie* this,char* descripcion);
int movie_getDescripcion(EMovie* this,char* descripcion);

int movie_setPuntaje(EMovie* this,int puntaje);
int movie_getPuntaje(EMovie* this,int* puntaje);

int movie_setLinkImagen(EMovie* this,char* linkImagen);
int movie_getLinkImagen(EMovie* this,char* linkImagen);

#endif // MOVIE_H_INCLUDED
