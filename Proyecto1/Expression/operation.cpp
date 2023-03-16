#include "operation.hpp"
#include <QRandomGenerator>
operation::operation(int line, int col, expression *op_izq, expression *op_der, std::string operador, bool unario){
    Line = line;
    Col = col;
    Op_izq = op_izq;
    Op_der = op_der;
    Operator = operador;
    Unario = unario;
}

symbol operation::ejecutar(environment *env, ast *tree)
{
    quint32 value1 = QRandomGenerator::global()->generate();
    quint32 value2 = QRandomGenerator::global()->generate();
    quint32 value3 = QRandomGenerator::global()->generate();
    symbol op1;
    symbol op2;

    if(this->Unario == false){
        op1 = this->Op_izq->ejecutar(env, tree);
        op2 = this->Op_der->ejecutar(env, tree);
    }else{
        op1 = this->Op_izq->ejecutar(env, tree);
    }
    symbol sym (Line,Col,"",NULO,nullptr);

    //matriz dominante: esta matriz retorna el tipo dominante entre dos operandos
    TipoDato Matrz[5][5] = {
        {INTEGER, FLOAT, STRING, INTEGER, NULO},//00,01,02,03,04
        {FLOAT, FLOAT, STRING, FLOAT, NULO},//10,11,12,13,14
        {STRING, STRING, STRING, STRING, NULO},//20,21,22,23,24
        {INTEGER, FLOAT, STRING, INTEGER, NULO},//30,31,32,33,34
        {NULO, NULO, NULO, NULO, NULO}//40,41,42,43,44
    };
    //INTEGER=0, FLOAT=1, STRING=2, BOOL=3, NULO=4
    TipoDato Dominante;
    if(this->Unario == false){
        Dominante = Matrz[op1.Tipo][op2.Tipo];
    }else{
        Dominante= Matrz[op1.Tipo][op1.Tipo];
    }

    if(Operator == "+")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"SUMA\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER)
        {
            int result=0;
            bool val;
            bool val2;
            int *val3=0;
            int *val4=0;
            if(op1.Tipo == BOOL){
                val = *static_cast<bool*>(op1.Value);
                if(val == true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val3 = static_cast<int*>(op1.Value);
                result += *val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2==true){
                    result +=1;
                }else{
                    result+=0;
                }
            }else{
                val4 = static_cast<int*>(op2.Value);
                result += *val4;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }
        else if(Dominante == STRING)
        {
            std::string result;
            std::string *val1;
            std::string *val2;
            int res =0;
            int res2=0;
            float rersf=0.0;
            float rersf2=0.0;
            bool resb;
            bool resb2;
            if(op1.Tipo == INTEGER){//cuando el primer valor es un entero
                res = *static_cast<int*>(op1.Value);
                result +=std::to_string(res);
            }else if (op1.Tipo == FLOAT){//cuando el primer valor es un decimal
                rersf = *static_cast<float *>(op1.Value);
                result +=std::to_string(rersf);
            }else if(op1.Tipo == BOOL){//cuando el primer valor es un boolean
                resb = *static_cast<bool *>(op1.Value);
                if(resb==1){
                    result +="true";
                }else{
                    result +="false";
                }
            }else{
                val1 = (std::string *)op1.Value;
                result +=*val1;
            }
            //para el tipo 2
            if(op2.Tipo == INTEGER){
                res2 = *static_cast<int*>(op2.Value);
                result +=std::to_string(res2);
            }else if(op2.Tipo == FLOAT){
                rersf2 = *static_cast<float *>(op2.Value);
                result +=std::to_string(rersf2);
            }else if(op2.Tipo == BOOL){
                resb2 = *static_cast<bool *>(op2.Value);
                if(resb2 == 1){
                    result +="true";//esta parte no estoy tan seguro
                }else{
                    result +="false";
                }
            }else{
                val2 = (std::string *)op2.Value;
                result +=*val2;
            }
            sym = symbol(Line,Col,"",Dominante, &result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+(*static_cast<std::string*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+(*static_cast<std::string*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result=0;
            bool val;
            bool val2;
            int *val3=0;
            int *val4=0;
            float val5=0.0;
            float val6=0.0;
            if(op1.Tipo==INTEGER){
                val3=static_cast<int*>(op1.Value);
                result += *val3;
            }else if(op1.Tipo == BOOL){
                val=*static_cast<bool*>(op1.Value);
                if(val==true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val5 = *static_cast<float*>(op1.Value);
                result += val5;
            }
            if(op2.Tipo==INTEGER){
                val4=static_cast<int*>(op2.Value);
                result +=*val4;
            }else if(op2.Tipo==BOOL){
                val2=*static_cast<bool*>(op2.Value);
                if(val2==true){
                    result+=1;
                }else{
                    result+=0;
                }
            }else{
                val6 = *static_cast<float*>(op2.Value);
                result += val6;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }
        else
        {
            //se reporta un error
            //tree->ErrorOut += "Error: tipo incorrecto para la suma";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error: Tipo incorrecto para suma</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }
    else if(Operator == "-")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"RESTA\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER)
        {
            //en esta resta op1 siempre sera positivo y op2 siempre sera negativo
            int result=0;
            bool val1;
            bool val2;
            int *val3;
            int *val4;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1==true){
                    result +=1;
                }else{
                    result += 0;
                }
            }else {
                val3 = static_cast<int*>(op1.Value);
                result +=*val3;
            }

            if(op2.Tipo == BOOL){
                val2=*static_cast<bool*>(op2.Value);
                if(val2==true){
                    result -=1;
                }else{
                    result -=0;
                }
            }else{
                val4 = static_cast<int*>(op2.Value);
                result =result -*val4;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result=0.0;
            int val1=0;
            int val2=0;
            bool val3=true;
            bool val4=true;
            float val5=0.0;
            float val6=0.0;
            if(op1.Tipo == INTEGER){
                val1=*static_cast<int*>(op1.Value);
                result +=val1;
            }else if(op1.Tipo == BOOL){
                val3=*static_cast<bool*>(op1.Value);
                if(val3==true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val5=*static_cast<float*>(op1.Value);
                result +=val5;
            }
            if(op2.Tipo == INTEGER){
                val2=*static_cast<int*>(op2.Value);
                result -=val2;
            }else if(op2.Tipo == BOOL){
                val4=*static_cast<bool*>(op2.Value);
                if(val4==true){
                    result -=1;
                }else{
                    result -=0;
                }
            }else{
                val6 = *static_cast<float*>(op2.Value);
                result -= val6;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //se reporta un error
            tree->ErrorOut += "Error: tipo incorrecto para la resta";
        }
    }
    else if(Operator == "*")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MULTIPLICACIÓN\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER)
        {
            int result=0;
            bool val1;
            bool val2;
            int val3;
            int val4;
            if(op1.Tipo==BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1==true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result +=val3;
            }
            if(op2.Tipo == BOOL){
                val2=*static_cast<bool*>(op2.Value);
                if(val2==true){
                    result *=1;
                }else{
                    result *=0;
                }
            }else{
                val4=*static_cast<int*>(op2.Value);
                result *=val4;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result=0.0;
            int val1=0;
            int val2=0;
            bool val3=true;
            bool val4=true;
            float val5;
            float val6;
            if(op1.Tipo==INTEGER){
                val1=*static_cast<int*>(op1.Value);
                result +=val1;
            }else if(op1.Tipo ==BOOL){
                val3=*static_cast<bool*>(op1.Value);
                if(val3==true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val5=*static_cast<float*>(op1.Value);
                result +=val5;
            }

            if(op2.Tipo==INTEGER){
                val2=*static_cast<int*>(op2.Value);
                result *=val2;
            }else if(op2.Tipo==BOOL){
                val4=*static_cast<bool*>(op2.Value);
                if(val4==true){
                    result *=1;
                }else{
                    result *=0;
                }
            }else{
                val6=*static_cast<float*>(op2.Value);
                result *=val6;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //se reporta un error
            tree->ErrorOut += "Error: tipo incorrecto para multiplicacion";
        }
    }
    else if(Operator == "/")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"DIVISION\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result = 0;
            int *val1 = 0;
            int val2 = 0;
            bool val3 = true;
            bool val4 = true;
            if(op1.Tipo==BOOL){
                val3=*static_cast<bool*>(op1.Value);
                if(val3==true){
                    result +=val3;
                }else{
                    result=0;
                }
            }else{
                val1=static_cast<int*>(op1.Value);
                if(val1!=0){
                    result += *val1;
                }else{
                    result=0;
                }
            }

            if(op2.Tipo==BOOL){
                val4=*static_cast<bool*>(op2.Value);
                if(val4==true){
                    result /=val4;
                    sym = symbol(Line,Col,"",Dominante,&result);
                }else{
                    tree->ErrorOut += "Error: no se puede dividir cero";
                }
            }else{
                val2 = *static_cast<int*>(op2.Value);
                if(val2!=0){
                    result /= val2;
                    sym = symbol(Line,Col,"",Dominante,&result);
                }else{
                    tree->ErrorOut += "Error: no se puede dividir cero";
                }
            }
            //sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
            /*if (*val1 != 0)
            {
                 result = *val1 / *val2;
                sym = symbol(Line,Col,"",Dominante,&result);
            }else{
                tree->ErrorOut += "Error: no se puede dividir cero";
            }*/

        }else if(Dominante == FLOAT){
            float result=0.0;
            int val1=0;
            int val2=0;
            bool val3=true;
            bool val4=true;
            float val5;
            float val6;
            if(op1.Tipo==INTEGER){
                val1=*static_cast<int*>(op1.Value);
                if(val1!=0){
                    result +=val1;
                }else{
                    result +=0;
                }
            }else if(op1.Tipo ==BOOL){
                val3=*static_cast<bool*>(op1.Value);
                if(val3==true){
                    result +=1;
                }else{
                    result +=0;
                }
            }else{
                val5=*static_cast<float*>(op1.Value);
                if(val5 != 0.0){
                    result +=val5;
                }else{
                    result+=0;
                }
            }
            if(op2.Tipo==INTEGER){
                val2=*static_cast<int*>(op2.Value);
                if(val2!=0){
                    result /=val2;
                    sym = symbol(Line,Col,"",Dominante,&result);
                }else{
                    tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">No se puede dividir en 0</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
                }
            }else if(op2.Tipo==BOOL){
                val4=*static_cast<bool*>(op2.Value);
                if(val4==true){
                    result /=1;
                    sym = symbol(Line,Col,"",Dominante,&result);
                }else{
                    tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">No se puede dividir en 0</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
                }
            }else{
                val6=*static_cast<float*>(op2.Value);
                if(val6!=0){
                    result *=val6;
                    sym = symbol(Line,Col,"",Dominante,&result);
                }else{
                    tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">No se puede dividir en 0</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
                }
            }
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para division</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == "%")//modulo
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MÓDULO\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result=0;
            bool val1=true;
            bool val2=true;
            int val3=0;
            int val4=0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                result += val1;
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result += val3;
            }

            if(op2.Tipo==BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                result %=val2;
            }else{
                val4 = *static_cast<int*>(op2.Value);
                result %=val4;
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
         }else{
            //tree->ErrorOut += "Error: tipo incorrecto para el módulo";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error, Tipo incorrecto para el módulo</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }

    }else if(Operator=="UNARIO"){
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"UNARIO\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+"}; \n";
        if(Dominante==INTEGER){
            int result =0;
            int *val1=0;
            bool val2=true;
            if(op1.Tipo == INTEGER){
                val1 = static_cast<int*>(op1.Value);
                result -= *val1;
            }else if(op1.Tipo == BOOL){
                val2 = *static_cast<bool*>(op1.Value);
                if(val2 == true){
                    result = -1;
                }else{
                    result =0;
                }
            }else{
                tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error, Tipo incorrecto para el unario</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
            }
            sym = symbol(Line,Col,"",Dominante,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";

        }else if(Dominante == FLOAT){
            float result =0.0;
            float val1=0.0;
            if(op1.Tipo == FLOAT){
                val1 = *static_cast<float*>(op1.Value);
                result = -val1;
                sym = symbol(Line,Col,"",Dominante,&result);
            }else{
                tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error, Tipo incorrecto para el unario</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
            }
        }else{
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error, Tipo incorrecto para el unario</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }

    else if(Operator == "<"){
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MENOR QUE\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if (Dominante == INTEGER)
        {
            int result1 =0;
            int result2=0;
            int result=0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2==true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else{
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }
            result = result1 < result2;
            /*int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 < *val2;*/
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result1 =0.0;
            float result2 = 0.0;
            int result = 0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            float val5 = 0.0;
            float val6 = 0.0;

            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }else{
                val5=*static_cast<float*>(op1.Value);
                result1 = val5;
            }

            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }else{
                val6=*static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = result1 < result2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para menor qué";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para menor que</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }
    else if(Operator == ">")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MAYOR QUE\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result1 =0;
            int result2=0;
            int result=0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2==true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else{
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }
            result = result1 > result2;
            /*int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 > *val2;*/
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result1 =0.0;
            float result2 = 0.0;
            int result = 0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            float val5 = 0.0;
            float val6 = 0.0;

            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }else{
                val5=*static_cast<float*>(op1.Value);
                result1 = val5;
            }

            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }else{
                val6=*static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = result1 > result2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para mayor qué";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error: tipo incorrecto para mayor qué</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == "<=")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MENOR O IGUAL QUE\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result1 =0;
            int result2=0;
            int result=0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2==true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else{
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }
            result = result1 <= result2;
            /*int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 <= *val2;*/
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result1 =0.0;
            float result2 = 0.0;
            int result = 0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            float val5 = 0.0;
            float val6 = 0.0;

            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }else{
                val5=*static_cast<float*>(op1.Value);
                result1 = val5;
            }

            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }else{
                val6=*static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = result1 <= result2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para menor o igual";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error: tipo incorrecto para menor o igual</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == ">=")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"MAYOR O IGUAL QUE\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result1 =0;
            int result2=0;
            int result=0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else{
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2==true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else{
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }
            result = result1 >= result2;
            /*int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 >= *val2;*/
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == FLOAT){
            float result1 =0.0;
            float result2 = 0.0;
            int result = 0;
            bool val1 = true;
            bool val2 = true;
            int val3 = 0;
            int val4 = 0;
            float val5 = 0.0;
            float val6 = 0.0;

            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 = 0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1 = val3;
            }else{
                val5=*static_cast<float*>(op1.Value);
                result1 = val5;
            }

            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 = 0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2 = val4;
            }else{
                val6=*static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = result1 >= result2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para mayor o igual";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Error: tipo incorrecto para mayor o igual</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == "!=")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"DIFERENTE DE\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result=0;
            int result1=0;
            int result2=0;
            bool val1=true;
            bool val2= true;
            int val3=0;
            int val4=0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 =0;
                }
            }else {
                val3 = *static_cast<int*>(op1.Value);
                result1= val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 =0;
                }
            }else {
                val4 = *static_cast<int*>(op2.Value);
                result2= val4;
            }
            result = (result1 != result2);
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == STRING){
            std::string *val1 = (std::string *)op1.Value;
            std::string *val2 = (std::string *)op2.Value;
            int result = *val1 != *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+*val1+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+*val2+"\"];\n";
        }else if(Dominante == FLOAT){
            int result=0;
            int result1=0;
            int result2=0;
            bool val1=true;
            bool val2= true;
            int val3=0;
            int val4=0;
            float val5=0.0;
            float val6=0.0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 =0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1= val3;
            }else{
                val5= *static_cast<float*>(op1.Value);
                result1 = val5;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 =0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2= val4;
            }else{
                val6= *static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = (result1 != result2);
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para diferencia";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para diferencia</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == "==")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"IGUAL A\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == INTEGER){
            int result=0;
            int result1=0;
            int result2=0;
            bool val1=true;
            bool val2= true;
            int val3=0;
            int val4=0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 =0;
                }
            }else {
                val3 = *static_cast<int*>(op1.Value);
                result1= val3;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 =0;
                }
            }else {
                val4 = *static_cast<int*>(op2.Value);
                result2= val4;
            }
            result = (result1 == result2);
            /*int *val1 = (int *)op1.Value;
            int *val2 = (int *)op2.Value;
            int result = *val1 == *val2;*/
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<int*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<int*>(op2.Value))+"\"];\n";
        }else if(Dominante == STRING){
            std::string *val1 = (std::string *)op1.Value;
            std::string *val2 = (std::string *)op2.Value;
            int result = *val1 == *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+*val1+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+*val2+"\"];\n";
        }else if(Dominante == FLOAT){
            int result=0;
            int result1=0;
            int result2=0;
            bool val1=true;
            bool val2= true;
            int val3=0;
            int val4=0;
            float val5=0.0;
            float val6=0.0;
            if(op1.Tipo == BOOL){
                val1 = *static_cast<bool*>(op1.Value);
                if(val1 == true){
                    result1 = 1;
                }else{
                    result1 =0;
                }
            }else if(op1.Tipo == INTEGER){
                val3 = *static_cast<int*>(op1.Value);
                result1= val3;
            }else{
                val5= *static_cast<float*>(op1.Value);
                result1 = val5;
            }
            if(op2.Tipo == BOOL){
                val2 = *static_cast<bool*>(op2.Value);
                if(val2 == true){
                    result2 = 1;
                }else{
                    result2 =0;
                }
            }else if(op2.Tipo == INTEGER){
                val4 = *static_cast<int*>(op2.Value);
                result2= val4;
            }else{
                val6= *static_cast<float*>(op2.Value);
                result2 = val6;
            }
            result = (result1 == result2);
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*static_cast<float*>(op1.Value))+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*static_cast<float*>(op2.Value))+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para igualación";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para igualacion</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator == "&&")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"AND\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            bool result = *val1 && *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*val1)+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*val2)+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para operación lógica";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para operacion logica AND</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }else if(Operator =="||")
    {
        tree->auxGraphOutNodos += std::to_string(value1) + "[label=\"OR\"];\n";
        tree->auxGraphOutEnlaces += std::to_string(value1) + "; \n" + std::to_string(value1) + " -> {"+std::to_string(value2)+" "+std::to_string(value3) + "}; \n";
        if(Dominante == BOOL){
            bool *val1 = (bool *)op1.Value;
            bool *val2 = (bool *)op2.Value;
            bool result = *val1 || *val2;
            sym = symbol(Line,Col,"",BOOL,&result);
            tree->auxGraphOutNodos += std::to_string(value2) + "[label=\""+std::to_string(*val1)+"\"];\n";
            tree->auxGraphOutNodos += std::to_string(value3) + "[label=\""+std::to_string(*val2)+"\"];\n";
        }else{
            //tree->ErrorOut += "Error: tipo incorrecto para operacion lógica";
            tree->ErrorOut += "<TR>\n<TD bgcolor=\"orange\">-</TD> \n <TD bgcolor=\"yellow\">operation</TD> \n <TD bgcolor=\"green\">Tipo incorrecto para operacion logica OR</TD> \n <TD bgcolor=\"darkgreen\">Semantico</TD> \n </TR>\n";
        }
    }
    return sym;
}
