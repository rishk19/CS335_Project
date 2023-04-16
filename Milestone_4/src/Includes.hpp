// Header Files

#ifndef INCLUDES_H_
#define INCLUDES_H_

#include "DataStructures/GlobalSymbolTable.hpp"
#include "DataStructures/SymbolTable.hpp"
#include "DataStructures/Tac.hpp"
#include "DataStructures/Type.hpp"
#include "DataStructures/GlobalSymbolTable.hpp"
#include "DataStructures/SymbolTable.hpp"
#include "DataStructures/Tac.hpp"
#include "DataStructures/Operator.hpp"
#include "DataStructures/Argument.hpp"

#include "GraphGeneration/graph_maker.hpp"
#include "GraphGeneration/node.hpp"

#include "FlagExtraction/Flag_extraction.hpp"

#include "TypeSystem/TypeChecking.hpp"

#include <bits/stdc++.h>


using namespace std;

// Macros
#define TYPE_ERROR -7
#define DECLARATION_ERROR -8

#define DECLARATION 1
#define INITIALIZATION 2
#define NON_DECLARAION 3
#define N_NodeChild 100
#define N_DataSize 1000
#define COPY_CODE 128
#define APPEND_CODE 129
#define ASSIGN_CODE 130
#define IF_CODE 131
#define FOR_CODE 132
#define WHILE_CODE 133
#define UNARY_CODE 134
#define BINARY_CODE 135
#define METHOD_INVOCATION 136
#define ARRAY_ACCESS 137
#define IS_LABEL 2
#define IS_LITERAL 0
#define IS_VARIABLE 1
#define IS_EMPTY -1
#define IS_ARRAYACESS 1000

extern struct SymbolTable* curr;
extern int newTempLabel;
extern Value dummyVal;

#endif