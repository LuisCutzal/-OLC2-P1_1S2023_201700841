#ifndef PRIMITIVE_HPP
#define PRIMITIVE_HPP
#include "Interfaces/expression.hpp"
using namespace std;
class primitive : public expression
{
public:
    int Line;
    int Col;
    TipoDato Tipo;
    string strVal;
    int numVal;
    bool boolVal;
    float floatVal;
    primitive(int, int, TipoDato, string, int, bool, float);
    symbol ejecutar(environment *env, ast *tree) override;
};

#endif // PRIMITIVE_HPP
