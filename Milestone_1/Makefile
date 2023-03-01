parse:
	clear
	mkdir bin
	flex -o bin/lex.yy.c src/tokenizer.l
	bison -d -t -o bin/parser.tab.c src/parser.y 
	gcc bin/parser.tab.c bin/lex.yy.c -o bin/parser
	clear

test:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./bin/parser tests/test_$$IMAGE.java; \

clean:
	rm bin/*
	rmdir bin
	clear