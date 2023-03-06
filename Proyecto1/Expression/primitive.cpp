#include "primitive.hpp"
using namespace std;
primitive::primitive(int line, int col, TipoDato tipo, string strval, int numval, bool boolval,float floatval){
    Line = line;
    Col = col;
    Tipo = tipo;
    strVal = strval;
    numVal = numval;
    boolVal = boolval;
    floatVal = floatval;
}

symbol primitive::ejecutar(environment *env, ast* tree)
{
    symbol sym (Line,Col,"",NULO,nullptr);
    switch (Tipo) {
    case INTEGER:
        sym = symbol(Line,Col,"",Tipo,&numVal);
        break;
    case FLOAT:
        sym = symbol(Line,Col,"",Tipo,&floatVal);
        break;
    case STRING:
        sym = symbol(Line,Col,"",Tipo,&strVal);
        break;
    case BOOL:
        sym = symbol(Line,Col,"",Tipo,&boolVal);
        break;
    default:
        break;
    }
    //std::cout << "retornando: " + std::to_string(*static_cast<int*>(Value) )+ "\n";
    return sym;
}
