flex lexicale.l
bison -d syntax.y
gcc lex.yy.c syntax.tab.c  ts.c -lfl -ly -o comp