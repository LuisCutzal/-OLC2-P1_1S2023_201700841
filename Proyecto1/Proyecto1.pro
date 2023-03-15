QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Environment/ast.cpp \
    Environment/environment.cpp \
    Environment/func_symbol.cpp \
    Environment/symbol.cpp \
    Expression/access.cpp \
    Expression/array_access.cpp \
    Expression/operation.cpp \
    Expression/primitive.cpp \
    Instruction/declaration.cpp \
    Instruction/func_if.cpp \
    Instruction/func_main.cpp \
    Instruction/list_instruction.cpp \
    Instruction/print.cpp \
    Interfaces/expression.cpp \
    Interfaces/instruction.cpp \
    Parser/lex.yy.c \
    Parser/parser.cpp \
    main.cpp \
    parserctx.cpp \
    proyecto1_olc2.cpp

HEADERS += \
    Environment/ast.hpp \
    Environment/environment.hpp \
    Environment/func_symbol.hpp \
    Environment/symbol.hpp \
    Environment/type.h \
    Expression/access.hpp \
    Expression/array_access.hpp \
    Expression/operation.hpp \
    Expression/primitive.hpp \
    Instruction/declaration.hpp \
    Instruction/func_if.hpp \
    Instruction/func_main.hpp \
    Instruction/list_instruction.hpp \
    Instruction/print.hpp \
    Interfaces/expression.hpp \
    Interfaces/instruction.hpp \
    Parser/location.hh \
    Parser/parser.hpp \
    Parser/position.hh \
    Parser/stack.hh \
    parserctx.hpp \
    proyecto1_olc2.hpp

FORMS += \
    proyecto1_olc2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Parser/lexer.l \
    Parser/parser.output \
    Parser/parser.y
