parse:
	clear
	flex tokenizer.l
	bison -d -t parser.y 
	gcc parser.tab.c lex.yy.c -o parser