#ifndef AST_HPP
#define AST_HPP
#include "Environment/symbol.hpp"
#include <string>
#include <QVector>

class ast
{
public:
    std::string ConsoleOut;
    std::string ErrorOut;
    std::string GraphOut; //std::string GraphOutNodos;
    std::string GraphOutEnlaces;
    std::string auxGraphOutNodos;
    std::string auxGraphOutEnlaces;
    std::string aux2GraphOutNodos;
    std::string aux2GraphOutEnlaces;//
    bool ElseIfFlag;
    bool IfReturn;
    QVector<symbol> ListReturn;
    ast();
};

#endif // AST_HPP
