#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP
#include <map>
#include "Environment/ast.hpp"
#include "Environment/symbol.hpp"
using namespace std;
using std::map;

class environment
{
public:
    environment *Anterior;
    map<string, symbol> Tabla;
    string Id;

    environment();
    void SaveVariable(symbol sym, string id, ast *tree);
    symbol GetVariable(string id, ast *tree);
};

#endif // ENVIRONMENT_HPP
