// Ejercicio 7 Crear una función que sume dos números.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

void SumarNumeros(float Numero1, float Numero2);

float Numero1 = 0;
float Numero2 = 0;

int main() {
    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Numero2;

    SumarNumeros(Numero1, Numero2);


    return 0;
}


void SumarNumeros(float Numero1, float Numero2)
{
    float resultado = Numero1 + Numero2;
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
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