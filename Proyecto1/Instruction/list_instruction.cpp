#include "list_instruction.hpp"
#include "Instruction/inst_return.hpp"
#include <QRandomGenerator>
list_instruction::list_instruction()
{
    this->ListInst = QVector<instruction*>();
}

void list_instruction::ejecutar(environment *env, ast *tree)
{
    quint32 value1 = QRandomGenerator::global()->generate();
    quint32 value2 = QRandomGenerator::global()->generate();
    tree->GraphOut += std::to_string(value1) + "[label=\"Lista de Instrucciones\"];\n"; //GraphOutNodos
    tree->GraphOutEnlaces += std::to_string(value1) + "; \n";
    for (int i = 0; i < this->ListInst.size(); i ++)
    {
        tree->GraphOutEnlaces += std::to_string(value1) + " -> ";
        this->ListInst[i]->ejecutar(env, tree);
        //validación return de if
        /*if(tree->IfReturn)
        {
            return;
        }
        //validacion return function
        inst_return* ret = dynamic_cast<inst_return*>(ListInst[i]);
        if(ret)
        {
            return;
        }*/
        if(tree->aux2GraphOutNodos != "" && tree->aux2GraphOutEnlaces != ""){
            if(tree->auxGraphOutNodos != "" && tree->auxGraphOutEnlaces != ""){
                tree->GraphOut += tree->aux2GraphOutNodos;
                tree->GraphOutEnlaces += tree->aux2GraphOutEnlaces;
                tree->aux2GraphOutEnlaces = "";
                tree->aux2GraphOutNodos = "";
                tree->GraphOut += tree->auxGraphOutNodos;//ingresando la expresion
                tree->GraphOutEnlaces += tree->auxGraphOutEnlaces;
                tree->auxGraphOutEnlaces = "";
                tree->auxGraphOutNodos = "";
            }else{
                size_t pos = tree->aux2GraphOutEnlaces.rfind("->");
                std::string oldString = "->";
                std::string newString = ";";
                tree->GraphOut += tree->aux2GraphOutNodos;
                while (pos != std::string::npos) {
                    tree->aux2GraphOutEnlaces.replace(pos, oldString.length(), newString);
                    pos = tree->aux2GraphOutEnlaces.find(oldString, pos + newString.length());
                }
                tree->GraphOutEnlaces += tree->aux2GraphOutEnlaces;
                tree->aux2GraphOutEnlaces = "";
                tree->aux2GraphOutNodos = "";
            }
        }
        if(tree->IfReturn){
            return;
        }
    }
}

void list_instruction::newInst(instruction *inst)
{
    this->ListInst.push_back(inst);
}
