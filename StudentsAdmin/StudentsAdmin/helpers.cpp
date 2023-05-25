#include "helpers.h";

void fillGrades(int grades[SIZE], int& used_space) {
	std::cout << "Modulo de registro de notas" << std::endl;

	std::cout << "Cuanto estudiantes tiene(maximo 100): ";
	std::cin >> used_space;

	for (int index = 0; index < used_space; index++)
	{
		std::cout << "Ingrese la calificacion: ";
		std::cin >> grades[index];
	}
}

void showGrades(int grades[SIZE], int& used_space) {
	std::cout << "Modulo de visualizacion de notas" << std::endl;
	for (int index = 0; index < used_space; index++)
		std::cout << "Calificacion #" << index + 1 << ": " << grades[index] << std::endl;
}

int getMedia(int grades[SIZE], int& used_space)
{
	if (used_space == 0)
		return 0;

	int sum = 0;
	for (int index = 0; index < used_space; index++)
		sum += grades[index];
	return sum / used_space;
}

int getMax(int grades[SIZE], int& used_space)
{
	int max = grades[0];
	for (int i = 1; i < used_space; i++)
		if (grades[i] > max) 
			max = grades[i];
	return max;
}

int getMin(int grades[SIZE], int& used_space)
{
	int min = grades[0];
	for (int i = 1; i < used_space; i++)
		if (grades[i] < min)
			min = grades[i];
	return min;
}

int search(int grades[SIZE], int& used_space, int target)
{
	for (int i = 0; i < used_space; i++)
		if (grades[i] == target) 
			return i;
	return -1;
}

bool removeElement(int grades[SIZE], int& used_space, int target)
{
	int indexOf = search(grades, used_space, target);
	if (indexOf == -1)
		return false;

	for (int index = indexOf; index < used_space - 1; index++)
		grades[index - 1] = grades[index + 1];
	// Para no mostrar el último elemento
	used_space--;
	return true;
}
