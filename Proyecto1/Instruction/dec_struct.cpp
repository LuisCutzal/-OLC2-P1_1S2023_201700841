#include "dec_struct.hpp"
#include <QRandomGenerator>
dec_struct::dec_struct(int line, int col, map_struct_dec *array, std::string id)
{
    Line = line;
    Col = col;
    Array = array;
    Id = id;
}

void dec_struct::ejecutar(environment *env, ast *tree)
{
//    map<std::string, TipoDato>::iterator i;
//    for(i = Array->ListDec.begin(); i != Array->ListDec.end(); ++i){
//        std::cout << i->first << ": " << i->second << std::endl;
//    }
    map<std::string, TipoDato>::iterator i;
    for(i = Array->ListDec.begin(); i != Array->ListDec.end(); ++i){
        std::cout << i->first << ": " << i->second << std::endl;
        quint32 value1 = QRandomGenerator::global()->generate();
        tree->GraphOut += std::to_string(value1) + "[label=\"Declaracion Struct "+Id+"\"];\n";//GraphOutNodos
        tree->GraphOutEnlaces += std::to_string(value1) + "; \n";
    }
    env->SaveStruct(Array->ListDec,Id, tree);
}
