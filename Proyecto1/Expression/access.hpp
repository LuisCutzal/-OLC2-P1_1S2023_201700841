#ifndef ACCESS_HPP
#define ACCESS_HPP
#include "Interfaces/expression.hpp"
using namespace std;
class access : public expression
{
public:
    int Line;
    int Col;
    std::string Id;
    access(int line, int col, string id);
    symbol ejecutar(environment *env, ast *tree) override;
};

#endif // ACCESS_HPP
