#include "operation.hpp"
using namespace std;
operation::operation(int line, int col, expression *op_izq, expression *op_der, std::string operador){
    Line = line;
    Col = col;
    Op_izq = op_izq;
    Op_der = op_der;
    Operator = operador;
}

symbol operation::ejecutar(environment *env, ast *tree)
{
    symbol sym (Line,Col,"",NULO,nullptr);
    symbol op1 = this->Op_izq->ejecutar(env, tree);
    symbol op2 = this->Op_der->ejecutar(env, tree);

    //matriz dominante: esta matriz retorna el tipo dominante entre dos operandos
    TipoDato Matrz[5][5] = {
        {INTEGER, FLOAT, STRING, INTEGER, NULO},//00,01,02,03,04
        {FLOAT, FLOAT, STRING, FLOAT, NULO},//10,11,12,13,14
        {STRING, STRING, STRING, STRING, NULO},//20,21,22,23,24
        {INTEGER, FLOAT, STRING, BOOL, NULO},//30,31,32,33,34
        {NULO, NULO, NULO, NULO, NULO}//40,41,42,43,44
    };
    //INTEGER=0, FLOAT=1, STRING=2, BOOL=3, NULO=4
    TipoDato Dominante = Matrz[op1.Tipo][op2.Tipo];

    if(Operator == "+")
    {
        if(Dominante == INTEGER)
        {
            int result = *static_cast<int*>(op1.Value) + *static_cast<int*>(op2.Value);
            sym = symbol(Line,Col,"",Dominante,&result);
        }
        else if(Dominante == STRING)
        {
            string result;
            string *val1;
            string *val2;
            int res =0;
            int res2=0;
            float rersf=0.0;
            float rersf2=0.0;
            if(op1.Tipo == INTEGER){
                res = *static_cast<int*>(op1.Value);
                result +=to_string(res);
            }else if (op1.Tipo == FLOAT){
                rersf = *static_cast<float *>(op1.Value);
                result +=to_string(rersf);
            }else{
                val1 = (string *)op1.Value;
                result +=*val1;
            }

            if(op2.Tipo == INTEGER){
                res2 = *static_cast<int*>(op2.Value);
                result +=to_string(res2);
            }else if(op2.Tipo == FLOAT){
                rersf2 = *static_cast<float *>(op1.Value);
                result +=to_string(rersf2);
            }else{
                val2 = (string *)op2.Value;
                result +=*val2;
            }
            sym = symbol(Line,Col,"",Dominante, &result);

            /*std::string *val1 = (std::string *)op1.Value;
            std::string *val2 = (std::string *)op2.Value;
            std::string result = *val1 + *val2;
            sym = symbol(Line,Col,"",op1.Tipo,&result);*/
        }
        else
        {
            //se reporta un error
            tree->ErrorOut += "Error: tipo incorrecto para la suma";
        }
    }
    else if(Operator == "-")
    {
        if(Dominante == INTEGER)
        {
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 - *val2;
            sym = symbol(Line,Col,"",Dominante,&result);
        }
        else
        {
            //se reporta un error
            tree->ErrorOut += "Error: tipo incorrecto para la resta";
        }
    }
    else if(Operator == "*")
    {
        if(Dominante == INTEGER)
        {
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 * *val2;
            sym = symbol(Line,Col,"",Dominante,&result);
        }
        else
        {
            //se reporta un error
            tree->ErrorOut += "Error: tipo incorrecto para multiplicacion";
        }
    }
    else if(Operator == "/")
    {
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            if (*val1 != 0)
            {
                int result = *val1 / *val2;
                sym = symbol(Line,Col,"",Dominante,&result);
            }else{
                tree->ErrorOut += "Error: no se puede dividir cero";
            }            
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para división";
        }
    }
    else if(Operator == "<"){
        if (Dominante == INTEGER)
        {
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 < *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para menor qué";
        }
    }
    else if(Operator == ">"){
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 > *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para mayor qué";
        }
    }else if(Operator == "<="){
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 <= *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para menor o igual";
        }
    }else if(Operator == ">="){
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 >= *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para mayor o igual";
        }
    }else if(Operator == "!="){
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 != *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else if(Dominante == STRING){
            std::string *val1 = (std::string *)op1.Value;
            std::string *val2 = (std::string *)op2.Value;
            int result = *val1 != *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            int result = *val1 != *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para diferencia";
        }
    }else if(Operator == "=="){
        if(Dominante == INTEGER){
            int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 == *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else if(Dominante == STRING){
            std::string *val1 = (std::string *)op1.Value;
            std::string *val2 = (std::string *)op2.Value;
            int result = *val1 == *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            int result = *val1 == *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para igualación";
        }
    }else if(Operator == "&&"){
        if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            bool result = *val1 && *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para operación lógica";
        }
    }else if(Operator =="||"){
        if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            bool result = *val1 || *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
        }else{
            tree->ErrorOut += "Error: tipo incorrecto para operacion lógica";
        }
    }
    return sym;
}
