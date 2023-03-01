%{
#include <stdio.h>
#include "assert.h"
int yyerror(char *s);
int yylex();
extern FILE *yyin;


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__

%union{
    char data[1000];
}

%%
Goal: CompilationUnit

Literal: IntegerLiteral | FloatingPointLiteral | BooleanLiteral | CharacterLiteral | StringLiteral | NullLiteral

IntegerLiteral: DecimalIntegerLiteral | HexIntegerLiteral | OctalIntegerLiteral

Type: PrimitiveType | ReferenceType

PrimitiveType: NumericType | Boolean

NumericType: IntegralType| FloatingPointType

IntegralType: Byte | Short | Int | Long | Char

FloatingPointType: Float | Double

ReferenceType: ClassOrInterfaceType | ArrayType

ClassOrInterfaceType: Name

ClassType: ClassOrInterfaceType

InterfaceType: ClassOrInterfaceType

ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket | Name LeftSquareBracket RightSquareBracket | ArrayType LeftSquareBracket RightSquareBracket

Name: SimpleName | QualifiedName

SimpleName: Identifier

QualifiedName: Name Dot Identifier

CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt

ImportDeclarations_opt : | ImportDeclarations

ImportDeclarations: ImportDeclaration | ImportDeclarations ImportDeclaration

TypeDeclarations_opt : | TypeDeclarations

TypeDeclarations: TypeDeclaration | TypeDeclarations TypeDeclaration

PackageDeclaration_opt : | PackageDeclaration

PackageDeclaration: Package Name Semicolon

ImportDeclaration: SingleTypeImportDeclaration | TypeImportOnDemandDeclaration

SingleTypeImportDeclaration: Import Name Semicolon

TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon

TypeDeclaration: ClassDeclaration | InterfaceDeclaration | Semicolon

Modifiers: Modifier | Modifiers Modifier

Modifier: Public | Protected | Private | Static | Abstract | Final | Native | Synchronized | Transient Volatile

ClassDeclaration: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt ClassBody

Modifiers_opt : | Modifiers

ClassExtend_opt : | ClassExtend

Interfaces_opt : | Interfaces

ClassExtend : Extends ClassType

Interfaces: Implements InterfaceTypeList

InterfaceTypeList: InterfaceType | InterfaceTypeList Comma InterfaceType

ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace

ClassBodyDeclarations_opt : ClassBodyDeclarations

ClassBodyDeclarations: ClassBodyDeclaration | ClassBodyDeclarations ClassBodyDeclaration

ClassBodyDeclaration: ClassMemberDeclaration | StaticInitializer | ConstructorDeclaration

ClassMemberDeclaration: FieldDeclaration | MethodDeclaration

FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon

VariableDeclarators: VariableDeclarator | VariableDeclarators Comma VariableDeclarator

VariableDeclarator: VariableDeclaratorId | VariableDeclaratorId EqualTo VariableInitializer

VariableDeclaratorId: Identifier | VariableDeclaratorId LeftSquareBracket RightSquareBracket

VariableInitializer: Expression | ArrayInitializer

MethodDeclaration: MethodHeader MethodBody

MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt | Modifiers_opt Void MethodDeclarator Throws_opt

Throws_opt : | Throws

MethodDeclarator: Identifier LeftParanthesis FormalParameterList_opt RightParanthesis | MethodDeclarator LeftSquareBracket RightSquareBracket

FormalParameterList_opt : | FormalParameterList

FormalParameterList: FormalParameter | FormalParameterList Comma FormalParameter

FormalParameter: Type VariableDeclaratorId

Throws: THROWS ClassTypeList

ClassTypeList: ClassType | ClassTypeList Comma ClassType

MethodBody: Block | Semicolon

StaticInitializer: Static Block

ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody

ConstructorDeclarator: SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis

ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace

ExplicitConstructorInvocation_opt : | ExplicitConstructorInvocation

ExplicitConstructorInvocation: This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon | Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon

ArgumentList_opt: | ArgumentList

InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody

ExtendsInterfaces_opt : | ExtendsInterfaces

ExtendsInterfaces: Extends InterfaceType | ExtendsInterfaces Comma InterfaceType

InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace

InterfaceMemberDeclarations_opt: | InterfaceMemberDeclarations

InterfaceMemberDeclarations: InterfaceMemberDeclaration | InterfaceMemberDeclarations InterfaceMemberDeclaration

InterfaceMemberDeclaration: ConstantDeclaration | AbstractMethodDeclaration

ConstantDeclaration: FieldDeclaration

AbstractMethodDeclaration: MethodHeader Semicolon

ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace

VariableInitializers_opt: | VariableInitializers

Comma_opt : | Comma

VariableInitializers: VariableInitializer | VariableInitializers Comma VariableInitializer

Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace

BlockStatements_opt : | BlockStatements

BlockStatements: BlockStatement | BlockStatements BlockStatement

BlockStatement: LocalVariableDeclarationStatement | Statement

LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon

LocalVariableDeclaration: Type VariableDeclarators

Statement: StatementWithoutTrailingSubstatement | LabeledStatement| IfThenStatement | IfThenElseStatement | WhileStatement | ForStatement

StatementNoShortIf: StatementWithoutTrailingSubstatement | LabeledStatementNoShortIf | IfThenElseStatementNoShortIf | WhileStatementNoShortIf | ForStatementNoShortIf

StatementWithoutTrailingSubstatement: Block | EmptyStatement | ExpressionStatement | SwitchStatement | DoStatement | BreakStatement | ContinueStatement | ReturnStatement | SynchronizedStatement | ThrowStatement | TryStatement

EmptyStatement: Semicolon

LabeledStatement: Identifier Semicolon Statement

LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf

ExpressionStatement: StatementExpression Semicolon

StatementExpression:  Assignment | PreIncrementExpression | PreDecrementExpression | PostIncrementExpression | PostDecrementExpression | MethodInvocation | ClassInstanceCreationExpression

IfThenStatement: If LeftParanthesis Expression RightParanthesis Statement

IfThenElseStatement: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement

IfThenElseStatementNoShortIf: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf

SwitchStatement: Switch LeftParanthesis Expression RightParanthesis SwitchBlock

SwitchBlock: LeftCurlyBrace SwitchBlockStatementGroups_opt SwitchLabels_opt RightCurlyBrace

SwitchBlockStatementGroups_opt: | SwitchBlockStatementGroups

SwitchLabels_opt: | SwitchLabels

SwitchBlockStatementGroups: SwitchBlockStatementGroup | SwitchBlockStatementGroups SwitchBlockStatementGroup

SwitchBlockStatementGroup: SwitchLabels BlockStatements

SwitchLabels: SwitchLabel | SwitchLabels SwitchLabel

SwitchLabel: Case ConstantExpression Semicolon | Default Semicolon

WhileStatement: While LeftParanthesis Expression RightParanthesis Statement

WhileStatementNoShortIf: While LeftParanthesis Expression RightParanthesis StatementNoShortIf

DoStatement: Do Statement While LeftParanthesis Expression RightParanthesis Semicolon

ForStatement: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement

ForStatementNoShortIf: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf

ForInit_opt: | ForInit

Expression_opt: | Expression

ForUpdate_opt: | ForUpdate

ForInit: StatementExpressionList | LocalVariableDeclaration

ForUpdate: StatementExpressionList

StatementExpressionList: StatementExpression | StatementExpressionList Comma StatementExpression

BreakStatement: Break Identifier_opt Semicolon

Identifier_opt: | Identifier

ContinueStatement: Continue Identifier_opt Semicolon

ReturnStatement: Return Expression_opt Semicolon

ThrowStatement: THROW Expression Semicolon

SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block

TryStatement: Try Block Catches | Try Block Catches_opt Finally

Catches_opt: | Catches

Catches: CatchClause | Catches CatchClause

CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block

Finally: FINALLY Block

Primary: PrimaryNoNewArray | ArrayCreationExpression

PrimaryNoNewArray: Literal | This | LeftParanthesis Expression RightParanthesis | ClassInstanceCreationExpression | FieldAccess | MethodInvocation | ArrayAccess

ClassInstanceCreationExpression: New ClassType LeftParanthesis ArgumentList_opt RightParanthesis

ArgumentList: Expression | ArgumentList Comma Expression

ArrayCreationExpression: New PrimitiveType DimExprs Dims_opt | New ClassOrInterfaceType DimExprs Dims_opt

Dims_opt: | Dims

DimExprs: DimExpr | DimExprs DimExpr

DimExpr: LeftSquareBracket Expression RightSquareBracket

Dims: LeftSquareBracket RightSquareBracket | Dims LeftSquareBracket RightSquareBracket

FieldAccess: Primary Dot Identifier | Super Dot Identifier

MethodInvocation: Name LeftParanthesis ArgumentList_opt RightParanthesis | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis | Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis

ArrayAccess: Name LeftSquareBracket Expression RightSquareBracket | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket

PostfixExpression: Primary | Name | PostIncrementExpression | PostDecrementExpression

PostIncrementExpression: PostfixExpression PlusPlus

PostDecrementExpression: PostfixExpression MinusMinus

UnaryExpression: PreIncrementExpression | PreDecrementExpression | Addition UnaryExpression | Substraction UnaryExpression | UnaryExpressionNotPlusMinus

PreIncrementExpression: PlusPlus UnaryExpression

PreDecrementExpression: MinusMinus UnaryExpression

UnaryExpressionNotPlusMinus: PostfixExpression | Tilde UnaryExpression | NotOperator UnaryExpression | CastExpression

CastExpression: LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression | LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus | LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus

MultiplicativeExpression: UnaryExpression | MultiplicativeExpression Product UnaryExpression | MultiplicativeExpression Divide UnaryExpression | MultiplicativeExpression Modulo UnaryExpression

AdditiveExpression: MultiplicativeExpression | AdditiveExpression Addition MultiplicativeExpression | AdditiveExpression Substraction MultiplicativeExpression

ShiftExpression: AdditiveExpression | ShiftExpression LeftShit AdditiveExpression | ShiftExpression RightShift AdditiveExpression | ShiftExpression TripleGreaterThan AdditiveExpression

RelationalExpression: ShiftExpression | RelationalExpression LessThan ShiftExpression | RelationalExpression GreaterThan ShiftExpression | RelationalExpression LessThanEqualTo ShiftExpression | RelationalExpression GreaterThanEqualTo ShiftExpression | RelationalExpression Instanceof ReferenceType

EqualityExpression: RelationalExpression | EqualityExpression EqualToEqualTo RelationalExpression | EqualityExpression NotEqualTo RelationalExpression

AndExpression: EqualityExpression | AndExpression BitwiseAnd EqualityExpression

ExclusiveOrExpression: AndExpression | ExclusiveOrExpression CircumFlex AndExpression

InclusiveOrExpression: ExclusiveOrExpression | InclusiveOrExpression BitwiseOr ExclusiveOrExpression

ConditionalAndExpression: InclusiveOrExpression | ConditionalAndExpression AndOperator InclusiveOrExpression

ConditionalOrExpression: ConditionalAndExpression | ConditionalOrExpression OrOperator ConditionalAndExpression

ConditionalExpression: ConditionalOrExpression | ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression

AssignmentExpression: ConditionalExpression | Assignment

Assignment: LeftHandSide AssignmentOperator AssignmentExpression

LeftHandSide: Name | FieldAccess | ArrayAccess

AssignmentOperator: EqualTo | ProductEqualTo | DivideEqualTo | ModuloEqualTo | AdditionEqualTo | SubstractionEqualTo | LeftShitEqualTo | RightShiftEqualTo | TripleGreaterThanEqualTo | BitWiseAndEqualTo | CircumFlexEqualTo | BitWiseOrEqualTo

Expression: AssignmentExpression

ConstantExpression: Expression


%%

int yyerror(char* s)
{
    printf("%s\n",s);
}

int main(int argc , char** argv)
{   
    assert(argc == 2);       // Need to add path to inputfile and output file

    yyin = fopen(argv[1] , "r");
    if(yyin == NULL){
        printf("No such file found ! \n");
        return 0;
    }
    printf("I am in before parse call \n");

    yyparse();

    printf("I am out of parse call \n");
    fclose(yyin);

    return 0;

}



