// Ejercicio 10 Calcular tiempo total de juego.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int minutosDia1 = 0; 
int minutosDia2 = 0;
int minutosDia3 = 0;


void MostrarTiempo(int minutos) {
    int horas = minutos / 60;
    int restoMinutos = minutos % 60;
    std::cout << horas << "h:" << restoMinutos << "m" << std::endl;
}

int main() {
    std::cout << "minutos jugados en el Dia 1: ";
    std::cin >> minutosDia1;

    std::cout << "minutos jugados en el Dia 2: ";
    std::cin >> minutosDia2;

    std::cout << "minutos jugados en el Dia 3: ";
    std::cin >> minutosDia3;

    
    int totalMinutos = minutosDia1 + minutosDia2 + minutosDia3;
    int promedioMinutos = totalMinutos / 3;

    std::cout << "Tiempo juegado: ";

    MostrarTiempo(totalMinutos);

    std::cout << "Promedio de juego por Dia: ";

    MostrarTiempo(promedioMinutos);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
