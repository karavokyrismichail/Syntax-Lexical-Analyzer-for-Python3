# Lexical-Analysis-with-Flex-Bison

A syntax and lexical analyzer for a subset of Python3

### Team

- Michail Karavokyris
- Ioannis Koutsocheras
- Gerasimos Papachronopoulos


### Syntax & Lexical analysis:

- **Comments**
- **Modules Import**
- **Variables** (declaration, initialization: int, float, string)
- **Operators** (supports the order: (*/=-) and cannot divide by zero)
- **Print definition**
- **Class definition**
- **Constructor definition**
- **Object creation**
- **Functions** (creation, call)
- **If statements** (elif, else)
- **For loops**
- **Lambda calculus**
- **Dictionaries** (Items, setdefault)

###  Also Supports

- **implementation of print() function**
- **Implementation of operations** (for integers and decimals)

### Compile & Run
1. flex lexer.l 
2. bison -y -d bison.y 
3. gcc -c y.tab.c lex.yy.c 
4. gcc y.tab.o lex.yy.o -o parser 
5. ./parser file.py
