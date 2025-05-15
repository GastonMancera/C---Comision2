// Ejercicio 11 Simulación de combate simple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Char {
public:
    std::string nombre;
    int vida;
    int ataque;
    int defensa;
    int vidaInicial;
    int danioRecibido;

    void cargarDatos() {
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Vida: ";
        std::cin >> vida;
        std::cout << "Ataque: ";
        std::cin >> ataque;
        std::cout << "Defensa: ";
        std::cin >> defensa;
        std::cin.ignore();  
        vidaInicial = vida;
        danioRecibido = 0;
    }

    void recibirDanio(int danio) {
        danioRecibido = danio;
        vida -= danio;
    }

    void mostrarResultado() {
        std::cout << nombre << ":\n";
        std::cout << "  Vida inicial: " << vidaInicial << "\n";
        std::cout << "  Daño recibido: " << danioRecibido << "\n";
        std::cout << "  Vida final: " << vida << "\n\n";
    }
};


int Valor2(int x) {
    int mask = x >> 31;
    return (x ^ mask) - mask;
}


int ParaAtaque(int valor) {
    
    return (valor + Valor2(valor)) / 2;
}


int calcularDanio(int ataque, int defensa) {
    return ParaAtaque(ataque - defensa);
}

void intercambiarDanios(Char& atacante, Char& defensor) {
    int danio = calcularDanio(atacante.ataque, defensor.defensa);
    defensor.recibirDanio(danio);
}

int main() {
    Char jugador, enemigo;

    std::cout << "--- Datos del JUGADOR ---\n";
    jugador.cargarDatos();

    std::cout << "\n--- Datos del ENEMIGO ---\n";
    enemigo.cargarDatos();

    
    intercambiarDanios(jugador, enemigo);
    intercambiarDanios(enemigo, jugador);

    std::cout << "\n--- RESULTADOS DEL COMBATE ---\n";
    jugador.mostrarResultado();
    enemigo.mostrarResultado();

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

