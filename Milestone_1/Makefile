parse:
	clear
	flex tokenizer.l
	bison -d -t parser.y 
	gcc parse.tab.c lex.yy.c -o parser
	./parser
	dot -Tpdf AST.dot -o AST.pdf