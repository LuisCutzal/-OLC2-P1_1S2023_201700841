#include "map_struct_dec.hpp"
#include <QRandomGenerator>
map_struct_dec::map_struct_dec()
{

}

symbol map_struct_dec::ejecutar(environment *env, ast *tree)
{
    quint32 value1 = QRandomGenerator::global()->generate();
    tree->GraphOut += std::to_string(value1) + "[label=\"Declaracion datos Struct\"];\n"; //GraphOutNodos
    tree->GraphOutEnlaces += std::to_string(value1) + "; \n" ;
    symbol sym (0,0,"",NULO,nullptr);
    return sym;
}

void map_struct_dec::newMap(std::string id, TipoDato tipo)
{
    ListDec[id] = tipo;
}
