#include "Parser.h"
#include "Complexo.h"  // Para interpretar números complexos
#include "Integracao.h" // Para lidar com integrais

void Parser::interpretar(const std::string& input){
    //Aqui vou analisar pedaço por pedaço da expressao.

    //Depois de identificar as operações, preciso
    //fazer os cálculos necessários.

    //Para isso, retornarei um id de identificação para
    //a classe de operação mais externa.

    //Exemplo: expressão integ(1, 2, 3x^2 + x^3)
    //Aqui no parser vou retornar id 1 e a calculadora receberá
    //esse id. A partir disso, ela saberá qual operação realizar
    //primeiro. Dentro de uma integração, por exemplo, posso ter soma,
    //fração, subtração, multiplicação, etc, e aí a classe integração chamará
    //essas operações se for necessário (essa ideia pode ser mais elaborada)
}

std::vector<Termo> Parser::parsePoli(const std::string& input){
    std::vector<Termo> terms;
    std::__cxx11::regex regexTerm(R"(([+-]?\s*\d*\.?\d*)\s*(x(?:\^(\d+))?)?)");
    return terms;
}