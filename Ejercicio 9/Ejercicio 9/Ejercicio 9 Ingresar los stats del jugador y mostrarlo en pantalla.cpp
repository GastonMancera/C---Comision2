// Ejercicio 9 Ingresar los stats del jugador y mostrarlo en pantalla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

std::string Nombre = "";
float VidaMax = 0;
float Defensa = 0;
float Ataque = 0;
float VelAtaque = 0;
float DanoCritico = 0;

int main()
{
    std::cout << "Ingrese su nombre!\n";
    std::cin >> Nombre; 

    std::cout << "Ingrese su Vida!\n";
    std::cin >> VidaMax;

    std::cout << "Ingrese su Defensa!\n";
    std::cin >> Defensa;

    std::cout << "Ingrese su Ataque!\n";
    std::cin >> Ataque;

    std::cout << "Ingrese su Velocidad de Ataque!\n";
    std::cin >> VelAtaque;

    std::cout << "Ingrese su Multiplicador de DMG critico!\n";
    std::cin >> DanoCritico;

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
