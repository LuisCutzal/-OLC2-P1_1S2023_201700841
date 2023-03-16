#include "access.hpp"
#include <QRandomGenerator>
access::access(int line, int col, std::string id)
{
    Line = line;
    Col = col;
    Id=id;
}

symbol access::ejecutar(environment *env, ast *tree)
{
    quint32 value1 = QRandomGenerator::global()->generate();
    tree->GraphOut += std::to_string(value1) + "[label=\"Acceso a "+Id+"\"];\n"; //GraphOutNodos
    tree->GraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> ";
    symbol sym = env->GetVariable(Id, env, tree);
    return sym;
}
