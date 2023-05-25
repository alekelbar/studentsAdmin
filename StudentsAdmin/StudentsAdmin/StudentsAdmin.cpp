#include <iostream>
#include "helpers.h"

// TAREAS: 
/*
    1) Agregar un funci�n que me permita llenar el areglo.
    2) Mostrar las calificaciones en el arreglo..
    3) Mostrar el promedio de las calificaciones.
    4) Mostrar la calificaci�n m�s alta.
    5) Mostrar la calificaci�n m�s baja.
    6) Buscar una calificaci�n..
    7) Remover una calificaci�n..
    8) ordenar el array(tarea)
*/

int main()
{
    int used_space = 3;
    int grades[SIZE] = { 10, 20, 30};

    //fillGrades(grades, used_space);
    showGrades(grades, used_space);
    removeElement(grades, used_space, 20);
    showGrades(grades, used_space);
    return EXIT_SUCCESS;
}
