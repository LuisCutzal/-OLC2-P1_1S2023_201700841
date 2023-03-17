### Universidad de San Carlos de Guatemala
### Facultad de Ingenieria
### Arquitectura de Computadoras y Ensambladores 1 - "A"
### Catedratico: 
### Auxiliar: 
<br><br><br><br>
<p style="text-align: center;"> Proyecto 1 <br>
Gramática </p>
<br><br><br><br>

| Nombre Completo                     | Carnet    
| :---:                               |  :----: 
| Luis Antonio Cutzal Chalí           | 201700841


<br><br>

---
<br><br>

### Expresiones Regulares
DIGITO [0-9] <br>
LETRAS [a-zA-ZñÑ] <br>
NUMERO {DIGITO}+ <br>
DECIMAL [0-9]+("."[0-9]+) <br>
ID  ({LETRAS}|"_")({DIGITO}|{LETRAS}|"_")* <br>
"//"[^\n]*\n            ; /* comentarios de una linea */ <br>
[ \t\v\r\n\f]             ; /* caracteres en blanco */ <br>
\/\*[^*]*\*+(?:[^*\/][^*]*\*+)*\/ ; //comentario multilinea <br>

### Gramática
<br>
G = { Terminales, No Terminales, Producciones, INICIO } <br>

Terminales = { +,-,*,/,<,>,<=,>=,==,!=,++,--,&&,||,;,=,:,,,printf,void, int, string, bool, main, true, false, if, else, struct, return, array, float
}
<br><br>
No Terminales = {PRIMITIVE, EXP, BOOL, LIST_ARR, CALL_EXP, START, LIST_INST, ELSEIF_LIST, ELSE, LIST_FUNC, EXP_LIST, MAIN, INSTRUCTION, PRINT, DECLARATION, IF, ELSEIF, STRUCT_DECLARATION, STRUCT_CREATION, FUNCTION, CALL_INST, RETURN, TYPES, DEC_LIST, FUNC_LIST
}

Inicio -> inicio
<br><br>
Producciones:
<br><br>
inicio : MAIN<br>
    | LIST_FUNC MAIN<br>
<br><br>
LIST_FUNC : LIST_FUNC FUNCTION<br>
        | FUNCTION<br>
<br><br>
FUNCTION : TYPES ID PARA FUNC_LIST PARC LLAVA LIST_INST LLAVC<br>
        | TYPES ID PARA PARC LLAVA LIST_INST LLAVC<br>
<br><br>
FUNC_LIST : FUNC_LIST ',' TYPES ID<br>
        | TYPES ID<br>
<br><br>
MAIN : VOID RMAIN PARA PARC LLAVA LIST_INST LLAVC<br>
<br><br>
LIST_INST : LIST_INST INSTRUCTION<br>
        | INSTRUCTION<br>
<br><br>
INSTRUCTION : PRINT ';' <br>
            | DECLARATION ';' <br>
            | IF <br>
            | STRUCT_DECLARATION <br>
            | STRUCT_CREATION <br>
            | CALL_INST <br>
            | RETURN ';' <br>
<br><br>
RETURN : RRETURN EXP<br>
    | RRETURN <br>
<br><br>
PRINT : PRINTF PARA EXP PARC <br>
<br><br>
DECLARATION : TYPES ID '=' EXP <br>
<br><br>
IF : RIF EXP LLAVA LIST_INST LLAVC ELSEIF_LIST ELSE<br>
    | RIF EXP LLAVA LIST_INST LLAVC ELSE<br>
<br><br>
ELSEIF_LIST : ELSEIF_LIST ELSEIF<br>
        | ELSEIF<br>
<br><br>
ELSEIF : RELSE RIF EXP LLAVA LIST_INST LLAVC<br>
<br><br>
ELSE : RELSE LLAVA LIST_INST LLAVC <br>
    | %empty <br>
<br><br>
STRUCT_DECLARATION : STRUCT ID LLAVA DEC_LIST LLAVC <br>
<br><br>
DEC_LIST : DEC_LIST TYPES ID ';'<br>
        | TYPES ID ';'<br>
<br><br>
STRUCT_CREATION : STRUCT ID ID '=' LLAVA EXP_LIST LLAVC <br>
<br><br>
EXP_LIST : EXP_LIST ',' EXP<br>
        | EXP<br>
<br><br>
TYPES : INT <br>
    | TSTRING <br>
    | BOOLEAN <br>
    | TSFLOAT <br>
    | VOID <br>
    | ARRAY <br>
<br><br>
EXP : EXP SUMA EXP <br>
    | EXP MENOS EXP <br>
    | EXP POR EXP <br>
    | EXP DIV EXP <br>
    | EXP MODULO EXP <br>
    | EXP MEN EXP <br>
    | EXP MAY EXP <br>
    | EXP MEN_IG EXP <br>
    | EXP MAY_IG EXP <br>
    | EXP DIF EXP <br>
    | EXP IG EXP <br>
    | EXP AND EXP <br>
    | EXP OR EXP <br>
    | PARA EXP PARC <br>
    | LLAVA EXP_LIST LLAVC <br>
    | CALL_EXP <br>
    | PRIMITIVE <br>
    | ID INCREMENTO <br>
    | MENOS EXP %prec UMINUS <br>
<br><br>
PRIMITIVE : NUMERO<br>
        | STRING<br>
        | BOOL <br>
        | LIST_ARR <br>
        | DECIMAL<br>
<br><br>
BOOL : RTRUE <br>
    | RFALSE <br>
<br><br>
LIST_ARR : LIST_ARR CORA EXP CORC <br>
        | LIST_ARR '.' ID <br>
        | ID <br>
<br><br>
CALL_EXP : ID PARA EXP_LIST PARC <br>
        | ID PARA PARC <br>
<br><br>
CALL_INST : ID PARA EXP_LIST PARC ';' <br>
        | ID PARA PARC ';'<br>