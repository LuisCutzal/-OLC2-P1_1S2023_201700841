#ifndef SYMBOL_HPP
#define SYMBOL_HPP
#include <iostream>
#include "type.h"
using namespace std;
class symbol
{
public:
    int Line;
    int Col;
    string Id;
    TipoDato Tipo;
    void *Value;
    symbol();
    symbol(int line, int col, string id, TipoDato tipo, void *value);
};

#endif // SYMBOL_HPP
