parse:
	clear
	mkdir bin
	flex -o bin/lex.yy.c src/tokenizer.l
	bison -d -t -o bin/parser.tab.c src/parser.y 
	gcc bin/parser.tab.c bin/lex.yy.c -o bin/parser

