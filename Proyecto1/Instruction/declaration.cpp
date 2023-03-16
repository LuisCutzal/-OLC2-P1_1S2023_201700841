#include "declaration.hpp"
#include <QRandomGenerator>
declaration::declaration(int line, int col, TipoDato tipo, std::string id, expression *valor)
{
    Line = line;
    Col = col;
    Tipo = tipo;
    Id = id;
    Valor = valor;
}
void declaration::ejecutar(environment *env, ast *tree)
{
    symbol sym = Valor->ejecutar(env, tree);
    if(Tipo == sym.Tipo)
    {
        env->SaveVariable(sym, Id, tree);
        quint32 value1 = QRandomGenerator::global()->generate();
        tree->GraphOut += std::to_string(value1) + "[label=\"Declaracion "+Id+"\"];\n";//GraphOutNodos
        tree->GraphOutEnlaces += std::to_string(value1) + "; \n" ;
    }
    else
    {
        //se reporta un error
        //tree->ErrorOut += "Error: el tipo es incorrecto";
        tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">delcaration</TD> \n <TD bgcolor=\"green\">Tipo incorrecto</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
    }
}
