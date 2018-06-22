#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct S_Empleado
{
  int id;
  char nombre[128];
  int horasTrabajadas;
  int sueldo;
};
typedef struct S_Empleado Empleado;

int em_calcularSueldo(void* this);
Empleado* em_new();
void em_delete(Empleado* this);
Empleado* em_newParametros(int id, char* nombre, int horasTrabajadas/*,int sueldo, char* email, char* genero, char* profesion, char* nacionalidad, char* usuario,*/ );
int em_setNombre(Empleado* this,char* nombre);
int em_getNombre(Empleado* this,char* nombre);
int em_setHorasTrabajadas(Empleado* this,int horasTrabajadas);
int em_getHorasTrabajadas(Empleado* this,int* horasTrabajadas);
int em_setSueldo(Empleado* this,int sueldo);
int em_getSueldo(Empleado* this,int* sueldo);
int em_setId(Empleado* this,int id);
int em_getId(Empleado* this,int* id);




#endif // EMPLEADO_H_INCLUDED
