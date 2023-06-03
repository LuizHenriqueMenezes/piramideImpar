#include <iostream>

int main() {
    int numeroMaximo;
    
    // Solicitar ao usuário o número máximo ímpar
    do {
        std::cout << "Digite um número máximo ímpar: ";
        std::cin >> numeroMaximo;
    } while (numeroMaximo % 2 == 0);
    
    // Imprimir a saída
    for (int i = 1; i <= numeroMaximo; i += 2) {
        for (int j = 1; j < i; j += 2) {
            std::cout << "  ";
        }
        
        for (int k = i; k <= numeroMaximo; ++k) {
            std::cout << k << " ";
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}
