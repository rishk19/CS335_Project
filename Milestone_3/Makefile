CC = g++
test:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./bin/parser --input= ./tests/test_$${IMAGE}.java --output = ./output/test_$${IMAGE}.dot ;\
	# dot -Tpdf ./output/test_$${IMAGE}.dot -o ./output/test_$${IMAGE}.pdf ;\

clean:
	rm -r bin
	rm -r output
	clear

parse:
	clear
	mkdir bin
	flex -o bin/lex.yy.c src/tokenizer.l 
	bison -d -t -o bin/parser.tab.cc src/parser.y 
	make parser
	mkdir output
	clear

parser: Type.o SymbolTable.o GlobalSymbolTable.o Tac.o Graph_maker.o Node.o Tokenizer.o Flag_extraction.o TypeChecking.o Main.o
	$(CC) bin/Type.o bin/SymbolTable.o bin/GlobalSymbolTable.o bin/Tac.o bin/Graph_maker.o bin/Node.o bin/Main.o bin/Tokenizer.o bin/Flag_extraction.o bin/TypeChecking.o -o bin/parser

Type.o: src/DataStructures/Type.cpp src/DataStructures/Type.hpp src/Includes.hpp
	$(CC) -c src/DataStructures/Type.cpp -o bin/Type.o

SymbolTable.o: src/DataStructures/SymbolTable.cpp src/Includes.hpp
	$(CC) -c src/DataStructures/SymbolTable.cpp -o bin/SymbolTable.o

GlobalSymbolTable.o: src/DataStructures/GlobalSymbolTable.cpp src/Includes.hpp
	$(CC) -c src/DataStructures/GlobalSymbolTable.cpp -o bin/GlobalSymbolTable.o

Tac.o: src/DataStructures/Tac.cpp src/Includes.hpp
	$(CC) -c src/DataStructures/Tac.cpp -o bin/Tac.o

Graph_maker.o: src/GraphGeneration/graph_maker.cpp src/Includes.hpp
	$(CC) -c src/GraphGeneration/graph_maker.cpp -o bin/Graph_maker.o

Node.o: src/GraphGeneration/node.cpp src/Includes.hpp
	$(CC) -c src/GraphGeneration/node.cpp -o bin/Node.o

Main.o: bin/parser.tab.cc src/Includes.hpp
	$(CC) -c bin/parser.tab.cc -o bin/Main.o

Tokenizer.o: bin/lex.yy.c bin/parser.tab.hh
	$(CC) -c bin/lex.yy.c -o bin/Tokenizer.o

Flag_extraction.o : src/FlagExtraction/Flag_extraction.cpp src/Includes.hpp
	$(CC) -c src/FlagExtraction/Flag_extraction.cpp -o bin/Flag_extraction.o

TypeChecking.o : src/TypeSystem/TypeChecking.cpp src/Includes.hpp
	$(CC) -c src/TypeSystem/TypeChecking.cpp -o bin/TypeChecking.o

all: clean parse

