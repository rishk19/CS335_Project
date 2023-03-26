parse:
	clear
	mkdir bin
	flex -o bin/lex.yy.c src/tokenizer.l
	bison -d -t -o bin/parser.tab.cc src/parser.y 
	g++ src/DataStructures/Tac.cpp src/DataStructures/GlobalSymbolTable.cpp src/DataStructures/SymbolTable.cpp src/DataStructures/Type.cpp bin/lex.yy.c bin/parser.tab.cc -o bin/parser
	mkdir output
	clear


tasty:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./bin/parser --input= ./tests/test_$${IMAGE}.java --output = ./output/test_$${IMAGE}.dot ;\
	
test:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./bin/parser --input= ./tests/test_$${IMAGE}.java --output = ./output/test_$${IMAGE}.dot ;\
	dot -Tpdf ./output/test_$${IMAGE}.dot -o ./output/test_$${IMAGE}.pdf ;\

clean:
	rm -r bin
	rm -r output
	clear