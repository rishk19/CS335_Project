parse:
	clear
	flex lexer.l
	bison -d -t parse.y 
	gcc parse.tab.c lex.yy.c -o parser