CC = g++-12
ifeq ($(shell uname),Linux)
	CC = g++
endif
TEST_DIR = tests
OUTPUT_DIR = output
BIN_DIR = bin
SRC_DIR = src

test:
	clear
	@read -p "Enter Serial Number of Test Case : " IMAGE;\
	./$(BIN_DIR)/parser --input= ./$(TEST_DIR)/test_$${IMAGE}.java --output = ./$(OUTPUT_DIR)/test_$${IMAGE}.3ac ;\
	#dot -Tpdf ./$(OUTPUT_DIR)/test_$${IMAGE}.dot -o ./$(OUTPUT_DIR)/test_$${IMAGE}.pdf ;\

clean:
	rm -r $(BIN_DIR)
	rm -r $(OUTPUT_DIR)
	clear

parse:
	clear
	mkdir $(BIN_DIR)
	flex -o $(BIN_DIR)/lex.yy.c $(SRC_DIR)/tokenizer.l 
	bison -d -t -o $(BIN_DIR)/parser.tab.cc $(SRC_DIR)/parser.y 
	make parser
	mkdir $(OUTPUT_DIR)
	clear

change:
	clear
	flex -o $(BIN_DIR)/lex.yy.c $(SRC_DIR)/tokenizer.l 
	bison -d -t -o $(BIN_DIR)/parser.tab.cc $(SRC_DIR)/parser.y 
	make parser
	clear
	
parser: \
	Type.o \
	SymbolTable.o \
	GlobalSymbolTable.o \
	Tac.o \
	Graph_maker.o \
	Node.o \
	Tokenizer.o \
	Flag_extraction.o \
	TypeChecking.o \
	Quadruple.o \
	Argument.o \
	Operator.o \
	Main.o 

	$(CC) \
	$(BIN_DIR)/Type.o \
	$(BIN_DIR)/SymbolTable.o \
	$(BIN_DIR)/GlobalSymbolTable.o \
	$(BIN_DIR)/Tac.o \
	$(BIN_DIR)/Graph_maker.o \
	$(BIN_DIR)/Node.o \
	$(BIN_DIR)/Main.o \
	$(BIN_DIR)/Tokenizer.o \
	$(BIN_DIR)/Flag_extraction.o \
	$(BIN_DIR)/TypeChecking.o  \
	$(BIN_DIR)/Quadruple.o \
	$(BIN_DIR)/Argument.o \
	$(BIN_DIR)/Operator.o \
	-o $(BIN_DIR)/parser

Type.o: $(SRC_DIR)/DataStructures/Type.cpp $(SRC_DIR)/DataStructures/Type.hpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/Type.cpp -o $(BIN_DIR)/Type.o

SymbolTable.o: $(SRC_DIR)/DataStructures/SymbolTable.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/SymbolTable.cpp -o $(BIN_DIR)/SymbolTable.o

GlobalSymbolTable.o: $(SRC_DIR)/DataStructures/GlobalSymbolTable.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/GlobalSymbolTable.cpp -o $(BIN_DIR)/GlobalSymbolTable.o

Tac.o: $(SRC_DIR)/DataStructures/Tac.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/Tac.cpp -o $(BIN_DIR)/Tac.o

Graph_maker.o: $(SRC_DIR)/GraphGeneration/graph_maker.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/GraphGeneration/graph_maker.cpp -o $(BIN_DIR)/Graph_maker.o

Node.o: $(SRC_DIR)/GraphGeneration/node.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/GraphGeneration/node.cpp -o $(BIN_DIR)/Node.o

Main.o: $(BIN_DIR)/parser.tab.cc $(SRC_DIR)/Includes.hpp
	$(CC) -c $(BIN_DIR)/parser.tab.cc -o $(BIN_DIR)/Main.o

Tokenizer.o: $(BIN_DIR)/lex.yy.c $(BIN_DIR)/parser.tab.hh
	$(CC) -c $(BIN_DIR)/lex.yy.c -o $(BIN_DIR)/Tokenizer.o

Flag_extraction.o : $(SRC_DIR)/FlagExtraction/Flag_extraction.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/FlagExtraction/Flag_extraction.cpp -o $(BIN_DIR)/Flag_extraction.o

TypeChecking.o : $(SRC_DIR)/TypeSystem/TypeChecking.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/TypeSystem/TypeChecking.cpp -o $(BIN_DIR)/TypeChecking.o

Quadruple.o : $(SRC_DIR)/DataStructures/Quadruple.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/Quadruple.cpp -o $(BIN_DIR)/Quadruple.o

Argument.o : $(SRC_DIR)/DataStructures/Argument.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/Argument.cpp -o $(BIN_DIR)/Argument.o

Operator.o : $(SRC_DIR)/DataStructures/Operator.cpp $(SRC_DIR)/Includes.hpp
	$(CC) -c $(SRC_DIR)/DataStructures/Operator.cpp -o $(BIN_DIR)/Operator.o

all: clean parse


list: $(TEST_DIR)/*
	for file in $^ ; do \
			(( out_file = (file:.java=.3ac) )) ;\
            echo "Hello" $${file} ; \
    done

test_many:
	clear
	@read -p "Enter Number of Test Case [n] you want to run : " IMAGE;\
	number = 1 ;\
	while [[ $$number -le $$IMAGE ]] ; do \
		./$(BIN_DIR)/parser --input= ./$(TEST_DIR)/test_$${number}.java --output = ./$(OUTPUT_DIR)/test_$${number}.3ac ;\
		((number = number + 1)); \
	done