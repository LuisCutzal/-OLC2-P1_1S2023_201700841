#ifndef OPERATION_HPP
#define OPERATION_HPP
#include "Interfaces/expression.hpp"
using namespace std;
class operation: public expression
{
public:
    int Line;
    int Col;
    expression *Op_izq;
    expression *Op_der;
    string Operator;
    bool Unario;
    operation(int line, int col, expression *op_izq, expression *op_der, string operador, bool Unario);
    symbol ejecutar(environment *env, ast *tree) override;
};

#endif // OPERATION_HPP
