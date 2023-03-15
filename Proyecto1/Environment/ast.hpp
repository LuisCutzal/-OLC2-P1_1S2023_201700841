#ifndef AST_HPP
#define AST_HPP
#include "Environment/symbol.hpp"
#include <string>
#include <QVector>
using namespace std;
class ast
{
public:
    string ConsoleOut;
    string ErrorOut;
    string GraphOut;
    bool ElseIfFlag;
    bool IfReturn;
    QVector<symbol> ListReturn;
    ast();
};

#endif // AST_HPP
