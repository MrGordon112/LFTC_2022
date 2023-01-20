#!/bin/bash

lex specif.lxi
yacc -d parser.y
gcc lex.yy.c y.tab.c -o result -lfl
