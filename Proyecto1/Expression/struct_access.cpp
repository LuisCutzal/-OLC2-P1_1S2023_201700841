#include "struct_access.hpp"
#include <QRandomGenerator>
struct_access::struct_access(int line,int col, expression* structexp, std::string id)
{
    Line = line;
    Col = col;
    StructExp = structexp;
    Id = id;
}

symbol struct_access::ejecutar(environment *env, ast *tree)
{
    quint32 value1 = QRandomGenerator::global()->generate();
    tree->GraphOut += std::to_string(value1) + "[label=\"Acceso a Struct "+Id+"\"];\n"; //GraphOutNodos
    tree->GraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> ";
    symbol sym (0,0,"",NULO,nullptr);

    //recuperar struct
    symbol symStruct = StructExp->ejecutar(env, tree);
    environment *envStruct = (environment *)symStruct.Value;

    sym = envStruct->GetVariable(Id, envStruct,tree);
    return sym;
}
