parse:
	clear
	mkdir bin
	flex -o bin/lex.yy.c src/tokenizer.l
	bison -d -t -o bin/parser.tab.c src/parser.y 
	gcc bin/parser.tab.c bin/lex.yy.c -o bin/parser
	mkdir output
	clear

test:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./bin/parser --input= tests/test_$$IMAGE.java --output = output/test_$$IMAGE.out; \

clean:
	rm bin/*
	rmdir bin
	rm output/*
	rmdir output
	clear