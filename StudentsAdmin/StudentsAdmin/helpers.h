#pragma once

#include <iostream>

const int SIZE = 100;

/*
* @brief Función para llenar el arreglo de notas
* @param grades El arreglo para llenar
* @param used_space El espacio que se usara
*/
void fillGrades(int grades[SIZE], int &used_space);

/*
* @brief Función para mostrar la notas
* @param grades El arreglo para mostrar
* @param used_space el espacio que se uso
*/
void showGrades(int grades[SIZE], int& used_space);

/*
* @brief Función para calcular el promedio de las calificaciones
* @param grades El arreglo para calcular
* @param used_space el espacio que se utilizo
*/
int getMedia(int grades[SIZE], int& used_space);


/*
* @brief Función para calcular la calificación más alta
* @param grades El arreglo para calcular
* @param used_space el espacio que se utilizo
*/
int getMax(int grades[SIZE], int& used_space);

/*
* @brief Función para calcular la calificación más baja
* @param grades El arreglo para calcular
* @param used_space el espacio que se utilizo
*/
int getMin(int grades[SIZE], int& used_space);

/*
* @brief Función para buscar una calificación
* @param grades El arreglo para calcular
* @param used_space el espacio que se utilizo
* @param target el elemento que quiero encontrar
* @return -1 si no existe, o el indice correcto
*/
int search(int grades[SIZE], int& used_space, int target);

/*
* @brief Función para eliminar una calificación
* @param grades El arreglo para calcular
* @param used_space el espacio que se utilizo
* @param target el elemento que quiero borrar
* @return true | false
*/
bool removeElement(int grades[SIZE], int& used_space, int target);