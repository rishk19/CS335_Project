parse:
	clear
	flex lexer.l
	bison -d --debug parse.y 
	gcc parse.tab.c lex.yy.c -o parser
	dot -Tpdf AST.dot -o AST.pdf
