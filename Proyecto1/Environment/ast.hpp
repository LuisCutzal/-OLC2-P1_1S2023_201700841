#ifndef AST_HPP
#define AST_HPP
#include <string>
using namespace std;
class ast
{
public:
    string ConsoleOut;
    string ErrorOut;
    string GraphOut;
    bool ElseIfFlag;
    bool IfReturn;
    ast();
};

#endif // AST_HPP
