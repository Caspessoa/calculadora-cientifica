#include <iostream>
#include "Calculadora.h"

int main() {
    std::string expressao;
    std::cout << "Digite uma expressão: ";
    std::getline(std::cin, expressao);

    std::string resultado = Calculadora::processarExpressao(expressao);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}