#include "Calculadora.h"
#include "Parser.h"

std::string Calculadora::processarExpressao(const std::string& expressao) {
    Parser::interpretar(expressao);
    //Depois de receber o id, vou saber qual expressão chamar primeiro.
    //Chamando a expressão principal, ela retornará os cálculos finais
    return "Resultado da expressão";// Chama o parser para analisar e calcular
}
