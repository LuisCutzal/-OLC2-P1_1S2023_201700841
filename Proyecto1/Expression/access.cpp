#include "access.hpp"
using namespace std;
access::access(int line, int col, string id)
{
    Line = line;
    Col = col;
    Id=id;
}

symbol access::ejecutar(environment *env, ast *tree)
{
    symbol sym = env->GetVariable(Id, tree);
    return sym;
}
