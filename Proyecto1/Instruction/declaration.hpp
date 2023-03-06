#ifndef DECLARATION_HPP
#define DECLARATION_HPP
#include "Interfaces/expression.hpp"
#include "Interfaces/instruction.hpp"
using namespace std;
class declaration : public instruction
{
public:
    int Line;
    int Col;
    TipoDato Tipo;
    string Id;
    expression *Valor;

    declaration(int line, int col, TipoDato tipo, string Id, expression *valor);
    void ejecutar(environment *env, ast *tree) override;
};

#endif // DECLARATION_HPP
