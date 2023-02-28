%{
#include <stdio.h>
#include "assert.h"
#define NCHILD 20
int yyerror(char *s);
int yylex();
extern FILE *yyin;
extern FILE *yyout;
struct Tree_node *root = NULL;

struct Tree_node{
    char* data;
    struct Tree_node* arr[NCHILD];

};
struct Tree_node* makeInternalTree_node(char* rule, struct Tree_node* memArr[], int mem);
struct Tree_node* makeleaf(char* Tree_node);


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__

%type <data> Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%type <data> BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%type <data> Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%type <data> EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%type <data> __EMPTY__

%union {
    char data[1000];
    struct Tree_node *exp;
}

%%

CompilationUnit : 
    OrdinaryCompilationUnit {

    }
    | ModularCompilationUnit {

    }

ModularCompilationUnit :
    __EMPTY__

OrdinaryCompilationUnit : 
    |TopLevelClassOrInterfaceDeclaration  OrdinaryCompilationUnit{

    }

TopLevelClassOrInterfaceDeclaration :
    ClassDeclaration {

    }
    | InterfaceDeclaration {

    }

ClassDeclaration :
    NormalClassDeclaration {

    }



NormalClassDeclaration : 
    ClassModifier_ntM Class TypeIdentifier TypeParamaters_nt ClassExtends_nt ClassImplements_nt ClassPermits_nt ClassBody {

    }

ClassModifier_ntM :
    | ClassModifier ClassModifier_ntM

TypeParamaters_nt :
    | TypeParameters

ClassExtends_nt :
    | ClassExtends

ClassImplements_nt :
    | ClassImplements

ClassPermits_nt :
    | ClassPermits



ClassModifier :
    Annotation
    | Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Sealed
    | Non_sealed
    | Strictfp


TypeParameters :
    GreaterThan TypeParameterList LessThan

TypeParameterList :
    TypeParameter Typerparameter_extender

Typerparameter_extender :
    | Comma TypeParameter Typerparameter_extender 


ClassExtends : 
    Extends ClassType

ClassImplements :
    Implements InterfaceTypeList



InterfaceTypeList :
    InterfaceType InterfaceType_extender

InterfaceType_extender : 
    | Comma InterfaceType InterfaceType_extender



ClassPermits :
    Permits TypeName TypeName_extender

TypeName_extender :
    | Comma TypeName TypeName_extender


ClassBody :
    LeftCurlyBrace ClassBodyDeclaration_ntM RightCurlyBrace

ClassBodyDeclaration_ntM :
    | ClassBodyDeclaration ClassBodyDeclaration_ntM

ClassBodyDeclaration :
    ClassMemberDeclaration
    | InstanceInitializer
    | StaticInitializer
    | ConstructorDeclaration

ClassMemberDeclaration :
    FieldDeclaration
    | MethodDeclaration
    | ClassDeclaration
    | InterfaceDeclaration
    | Semicolon

FieldDeclaration :
    FieldModifier_ntM UannType VariableDeclaratorList Semicolon

FieldModifier_ntM :
    | FieldModifier FieldModifier_ntM

FieldModifier :
    Annotation
    | Public
    | Protected
    | Private
    | Static
    | Final
    | Transient
    | Volatile

VariableDeclaratorList :
    VariableDeclarator VariableDeclarator_extender

VariableDeclarator_extender :
    | Comma VariableDeclarator VariableDeclarator_extender

VariableDeclarator :
    VariableDeclaratorId VariableInitializer_extender

VariableInitializer_extender :
    | EqualTo VariableInitializer

VariableDeclaratorId :
    Identifier Dims_nt

Dims_nt :
    | Dims 

VariableInitializer :
    Expression
    | ArrayInitializer

UannType :
    UannPrimitiveType
    | UannReferenceType

UannPrimitiveType :
    NumericType
    | BooleanLiteral

UannReferenceType :
    UannClassOrInterfaceType
    | UannTypeVariable
    | UannArrayType

UannClassOrInterfaceType :
    UannClassType
    | UannInterfaceType

UannClassType :
    TypeIdentifier TypeArguments_nt
    | UannClassOrInterfaceType Dot Annotation_ntM TypeIdentifier TypeArguments_nt

TypeArguments_nt :
    | TypeArgument

Annotation_ntM :
    | Annotation Annotation_ntM

UannInterfaceType :
    UannClassType

UannTypeVariable :
    TypeIdentifier

UannArrayType :
    UannPrimitiveType Dims
    | UannClassOrInterfaceType Dims
    | UannTypeVariable Dims


MethodDeclaration :
    MethodModifier_ntM MethodHeader MethodBody

MethodModifier_ntM :
    | MethodModifier MethodModifier_ntM


MethodModifier :
    Annotation
    | Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Synchronized
    | Native
    | Strictfp

MethodHeader :
    Result MethodDeclarator Throws_nt
    | TypeParameters Annotation_ntM Result MethodDeclarator Throws_nt

Throws_nt : 
    |Throws_ntK

Result :
    UannType
    | Void

MethodDeclarator :
    Identifier LeftParanthesis ReceiverParameter_extender FormalParameterList_nt RightParanthesis Dims_nt

ReceiverParameter_extender :
    | RecieverParameter Comma 

FormalParameterList_nt : 
    | FormalParameterList

RecieverParameter :
    Annotation_ntM UannType Identifier_extender_Dot This

Identifier_extender_Dot :
    | Identifier Dot

FormalParameterList :
    FormalParameter FormalParameter_extender

FormalParameter_extender :
    | Comma FormalParameter FormalParameter_extender

FormalParameter :
    VariableModifier_ntM UannType VariableDeclaratorId
    | VariableArityParameter

VariableModifier_ntM :
    | VariableModifier VariableModifier_ntM

VariableArityParameter :
    VariableModifier_ntM UannType Annotation_ntM TripleDot Identifier

VariableModifier :
    Annotation
    | Final

Throws_ntK : 
    Throws ExceptionListType

ExceptionListType :
    ExceptionType ExceptionType_extender

ExceptionType_extender :
    | Comma ExceptionType ExceptionType_extender

ExceptionType :
    ClassType
    | TypeVariable

MethodBody :
    Block
    | Semicolon

InstanceInitializer :
    Block

StaticInitializer :
    Static Block

ConstructorDeclaration :
    ConstructorModifier_ntM ConstructorDeclarator Throws_nt ConstructorBody

ConstructorModifier_ntM :
    | ConstructorModifier ConstructorModifier_ntM

ConstructorModifier :
    Annotation
    | Public
    | Private
    | Protected

ConstructorDeclarator :
    TypeParamaters_nt SimpleTypeName LeftParanthesis ReceiverParameter_extender FormalParameterList_nt RightParanthesis

SimpleTypeName :
    TypeIdentifier

ConstructorBody :
    LeftCurlyBrace ExplicitConstructorInvocation_nt BlockStatements_nt RightCurlyBrace

ExplicitConstructorInvocation_nt :
    | ExplicitConstructorInvocation

BlockStatements_nt :
    | BlockStatements

ExplicitConstructorInvocation :
    TypeArguments_nt This LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | ExpressionName Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | Primary Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon

ArgumentList_nt :
    | ArgumentList



UnqualifiedMethodIdentifier :
    Identifier

TypeIdentifier :
    Identifier

Literal :
    DecimalIntegerLiteral
    | FloatingPointIntegerLiteral
    | BooleanLiteral
    | CharacterLiteral
    | StringLiteral
    | TextBlock
    | NullLiteral

Type :
    PrimitiveType
    | ReferenceType

PrimitiveType : 
    Annotation_ntM NumericType
    | Annotation_ntM Boolean

NumericType :
    IntegralType
    | FloatingPointType

IntegralType :
    Byte
    | Short
    | Int
    | Long
    | Char

FloatingPointType :
    Float
    | Double

ReferenceType :
    ClassOrInterfaceType
    | TypeVariable
    | UannArrayType

ClassOrInterfaceType :
    ClassType
    | InterfaceType

ClassType :
    Annotation_ntM TypeIdentifier TypeArguments_nt
    | ClassOrInterfaceType Dot Annotation_ntM TypeIdentifier TypeArguments_nt

InterfaceType :
    ClassType

TypeVariable :
    Annotation_ntM TypeIdentifier

ArrayType :
    PrimitiveType Dims
    | ClassOrInterfaceType Dims
    | TypeVariable Dims

Dims :
    Annotation_ntM LeftSquareBracket RightSquareBracket  Annotation_extender_bracket

Annotation_extender_bracket :
    | Annotation_ntM LeftSquareBracket RightSquareBracket Annotation_extender_bracket

TypeParameter :
    TypeParameterModifier_ntM TypeIdentifier TypeBound_nt

TypeParameterModifier_ntM :
    | TypeParameterModifier TypeParameterModifier_ntM

TypeBound_nt :
    | TypeBound

TypeParameterModifier : Annotation

TypeBound :
    Extends TypeVariable
    | Extends ClassOrInterfaceType AdditionalBound_ntM

AdditionalBound_ntM :
    | AdditionalBound AdditionalBound_ntM

AdditionalBound :
    BitwiseAnd InterfaceType

TypeArguments :
    LessThan TypeArgumentList GreaterThan

TypeArgumentList :
    TypeArgument TypeArgument_extender

TypeArgument_extender :
    | Comma TypeArgument TypeArgument_extender

TypeArgument :
    ReferenceType
    | WildCard

WildCard :
    Annotation_ntM QuestionMark WildCardBounds_nt

WildCardBounds_nt :
    | WildCardBounds

WildCardBounds :
    Extends ReferenceType
    | Super ReferenceType


ModuleName :
    Identifier 
    | ModuleName Dot Identifier

PackageName :
    Identifier
    | PackageName Dot Identifier

TypeName :
    TypeIdentifier
    | PackageOrTypeName Dot TypeIdentifier

ExpressionName :
    Identifier
    | AmbiguousName Dot Identifier

MethodName :
    UnqualifiedMethodIdentifier

PackageOrTypeName :
    Identifier
    | PackageOrTypeName Dot Identifier

AmbiguousName :
    Identifier
    | AmbiguousName Dot Identifier

ArrayInitializer :
    LeftCurlyBrace VariableInitializerList_nt  Comma_nt RightCurlyBrace

VariableInitializerList_nt :
    | VariableInitializerList

Comma_nt :
    | Comma

VariableInitializerList :
    VariableInitializer VariableInitializer_comma_ntM

VariableInitializer_comma_ntM :
    | Comma VariableInitializer VariableInitializer_comma_ntM


Block :
    LeftCurlyBrace BlockStatements_nt RightCurlyBrace

BlockStatements :
    BlockStatement BlockStatement_ntM

BlockStatement_ntM :
    | BlockStatement BlockStatement_ntM


BlockStatement :
    LocalClassOrInterfaceDeclaration
    | LocalVariableDeclarationStatement
    | Statement

LocalClassOrInterfaceDeclaration :
    ClassDeclaration
    | NormalInterfaceDeclaration

LocalVariableDeclarationStatement :
    LocalVariableDeclaration Semicolon

LocalVariableDeclaration :
    VariableModifier_ntM LocalVariableType VariableDeclaratorList

LocalVariableType :
    UannType
    | Var

Statement:
    StatementWithoutTrailingSubstatement 
    | LabeledStatement 
    | IfThenStatement 
    | IfThenElseStatement 
    | WhileStatement 
    | ForStatement

StatementNoShortIf:
    StatementWithoutTrailingSubstatement 
    | LabeledStatementNoShortIf 
    | IfThenElseStatementNoShortIf 
    | WhileStatementNoShortIf 
    | ForStatementNoShortIf

StatementWithoutTrailingSubstatement:
    Block 
    | EmptyStatement 
    | ExpressionStatement 
    | AssertStatement 
    | SwitchStatement 
    | DoStatement 
    | BreakStatement 
    | ContinueStatement 
    | ReturnStatement 
    | SynchronizedStatement 
    | ThrowStatement 
    | TryStatement 
    | YieldStatement

EmptyStatement:
    Semicolon

LabeledStatement:
    Identifier Colon Statement

LabeledStatementNoShortIf:
    Identifier Colon StatementNoShortIf

ExpressionStatement:
    StatementExpression Semicolon

StatementExpression:
    Assignment 
    | PreIncrementExpression 
    | PreDecrementExpression 
    | PostIncrementExpression 
    | PostDecrementExpression 
    | MethodInvocation 
    | ClassInstanceCreationExpression

IfThenStatement :
    If LeftParanthesis Expression RightParanthesis Statement

IfThenElseStatement :
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement

IfThenElseStatementNoShortIf :
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf

AssertStatement :
    Assert Expression Semicolon
    | Assert Expression Colon Expression Semicolon

SwitchStatement :
    Switch LeftParanthesis Expression RightParanthesis SwitchBlock

SwitchBlock :
    LeftCurlyBrace SwitchRule SwitchRule_ntM RightCurlyBrace
    | LeftCurlyBrace SwitchBlockStatementGroup_ntM SwitchLabel_extender RightCurlyBrace

SwitchRule_ntM :
    | SwitchRule SwitchRule_ntM

SwitchBlockStatementGroup_ntM :
    | SwitchBlockStatementGroup SwitchBlockStatementGroup_ntM

SwitchLabel_extender :
    | SwitchLabel Colon SwitchLabel_extender

SwitchRule :
    SwitchLabel RightArrow Expression Semicolon
    | SwitchLabel RightArrow Block
    | SwitchLabel RightArrow ThrowStatement

SwitchBlockStatementGroup :
    SwitchLabel Colon SwitchLabel_extender BlockStatements

SwitchLabel :
    Case CaseConstant CaseConstant_extender
    | Default

CaseConstant_extender :
    | Comma CaseConstant CaseConstant_extender

CaseConstant :
    ConditionalExpression
    
WhileStatement :
    While LeftParanthesis Expression RightParanthesis Statement

WhileStatementNoShortIf :
    While LeftParanthesis Expression RightParanthesis StatementNoShortIf

DoStatement :   
    Do Statement While LeftParanthesis Expression RightParanthesis Semicolon

ForStatement :
    BasicForStatement 
    | EnhancedForStatement

ForStatementNoShortIf :
    BasicForStatementNoShortIf
    | EnhancedForStatementNoShortIf

BasicForStatement :
    For LeftParanthesis ForInit_nt Semicolon Expression_nt Semicolon ForUpdate_nt RightParanthesis Statement

Expression_nt :
    | Expression

ForInit_nt :
    | ForInit

ForUpdate_nt :
    | ForUpdate

BasicForStatementNoShortIf :
    For LeftParanthesis ForInit_nt Semicolon Expression_nt Semicolon ForUpdate_nt RightParanthesis StatementNoShortIf

ForInit :
    StatementExpressionList
    | LocalVariableDeclaration

ForUpdate :
    StatementExpressionList
    
StatementExpressionList :
    StatementExpression StatementExpression_extender

StatementExpression_extender :
    | Comma StatementExpression StatementExpression_extender

EnhancedForStatement :  
    For LeftParanthesis  LocalVariableDeclaration Colon Expression RightParanthesis Statement

EnhancedForStatementNoShortIf :
    For LeftParanthesis LocalVariableDeclaration Colon Expression RightParanthesis StatementNoShortIf

BreakStatement :
    Break Identifier_nt Semicolon

Identifier_nt :
    | Identifier

YieldStatement :
    Yield Expression Semicolon

ContinueStatement :
    Continue Identifier_nt Semicolon

ReturnStatement :
    Return Expression_nt Semicolon

ThrowStatement :
    Throw Expression Semicolon

SynchronizedStatement :
    Synchronized LeftParanthesis Expression RightParanthesis Block

TryStatement :
    Try Block Catches
    | Try Block Catches_nt Finally_ntK
    TryWithResourcesStatement

Catches_nt :
    | Catches

Catches :
    CatchClause CatchClause_ntM

CatchClause_ntM :
    | CatchClause CatchClause_ntM

CatchClause :
    Catch LeftParanthesis CatchFormalParameter RightParanthesis Block

CatchFormalParameter :
    VariableModifier_ntM CatchType VariableDeclaratorId

CatchType :
    UannClassType ClassType_extender

ClassType_extender :
    | BitwiseOr ClassType ClassType_extender

Finally_ntK :
    Finally Block

TryWithResourcesStatement :
    Try ResourceSpecification Block Catches_nt Finally_ntK_nT

Finally_ntK_nT :
    | Finally_ntK 

ResourceSpecification :
    LeftParanthesis ResourceList Semicolon_nt RightParanthesis

Semicolon_nt :
    | Semicolon

ResourceList :
    Resource Resource_extender

Resource_extender :
    | Semicolon Resource Resource_extender

Resource :
    LocalVariableDeclaration
    | VariableAccess

Pattern :
    TypePattern

TypePattern :
    LocalVariableDeclaration



Primary :
    PrimaryNoNewArray
    | ArrayCreationExpression

PrimaryNoNewArray:
    Literal 
    | ClassLiteral 
    | This 
    | TypeName Dot This 
    | LeftParanthesis Expression RightParanthesis 
    | ClassInstanceCreationExpression 
    | FieldAccess 
    | ArrayAccess 
    | MethodInvocation 
    | MethodReference

ClassLiteral :
    TypeName SquareBracket_ntM Dot Class
    | NumericType SquareBracket_ntM Dot Class
    | Boolean SquareBracket_ntM Dot Class
    | Void Dot Class

SquareBracket_ntM :
    | LeftSquareBracket RightSquareBracket SquareBracket_ntM

ClassInstanceCreationExpression :
    UnqualifiedClassInstanceCreationExpression
    | ExpressionName Dot UnqualifiedClassInstanceCreationExpression
    | Primary Dot UnqualifiedClassInstanceCreationExpression

UnqualifiedClassInstanceCreationExpression :
    New TypeArguments_nt ClassOrInterfaceTypeToInstantiate LeftParanthesis ArgumentList_nt RightParanthesis ClassBody_nt

ClassBody_nt :
    | ClassBody

ClassOrInterfaceTypeToInstantiate :
    Annotation_ntM Identifier Annotation_Identifier_extender TypeArgumentsOrDiamond_nt

Annotation_Identifier_extender :
    | Dot Annotation_ntM Identifier Annotation_Identifier_extender

TypeArgumentsOrDiamond_nt :
    | TypeArgumentsOrDiamond

TypeArgumentsOrDiamond :
    TypeArguments
    | LessThan GreaterThan

FieldAccess :
    Primary Dot Identifier
    | Super Dot Identifier
    | TypeName Dot Super Dot Identifier
    
ArrayAccess :
    ExpressionName LeftSquareBracket Expression RightSquareBracket
    | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket

MethodInvocation :
    MethodName LeftParanthesis ArgumentList_nt RightParanthesis
    | TypeName Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | ExpressionName Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | Primary Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | Super Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | TypeName Dot Super Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis

ArgumentList :
    Expression Expression_extender

Expression_extender :
    | Comma Expression Expression_extender

MethodReference :  
    ExpressionName Scope TypeArguments_nt Identifier
    | Primary Scope TypeArguments_nt Identifier
    | ReferenceType Scope TypeArguments_nt Identifier
    | Super Scope TypeArguments_nt Identifier
    | TypeName Dot Super Scope TypeArguments_nt Identifier
    | ClassType Scope TypeArguments_nt New
    | ArrayType Scope New

ArrayCreationExpression :
    New PrimitiveType DimExprs Dims_nt
    | New ClassOrInterfaceType DimExprs Dims_nt
    | New PrimitiveType Dims ArrayInitializer
    | New ClassOrInterfaceType Dims ArrayInitializer

DimExprs :
    DimExpr DimExpr_ntM

DimExpr_ntM :
    | DimExpr DimExpr_ntM

DimExpr :
    Annotation_ntM LeftSquareBracket Expression RightSquareBracket

Expression :
    LambdaExpression
    |AssignmentExpression

LambdaExpression :
    LambdaParameters RightArrow LambdaBody

LambdaParameters :
    LeftParanthesis LambdaParameterList_nt RightParanthesis
    | Identifier 

LambdaParameterList_nt :
    | LambdaParameterList 

LambdaParameterList :
    LambdaParameter LambdaParameter_extender
    | Identifier Identifier_extender_Comma

LambdaParameter_extender :
    | Comma LambdaParameter LambdaParameter_extender

Identifier_extender_Comma : 
    | Comma Identifier Identifier_extender_Comma

LambdaParameter :
    VariableModifier_ntM LambdaParameterType VariableDeclaratorId
    | VariableArityParameter 

LambdaParameterType :
    UannType
    | Var

LambdaBody :
    Expression
    | Block

AssignmentExpression :
    ConditionalExpression
    | Assignment

Assignment :    
    LeftHandSide AssignmentOperator Expression 

LeftHandSide :
    ExpressionName 
    | FieldAccess
    | ArrayAccess

AssignmentOperator :
    EqualTo
    | ProductEqualTo
    | DivideEqualTo
    | ModuloEqualTo
    | AdditionEqualTo
    | SubstractionEqualTo
    | LeftShitEqualTo
    | RightShiftEqualTo
    | TripleGreaterThan
    | BitWiseAndEqualTo
    | CircumFlexEqualTo
    | BitWiseOrEqualTo

ConditionalExpression:
    | ConditionalOrExpression 
    | ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression 
    | ConditionalOrExpression QuestionMark Expression Colon LambdaExpression 

ConditionalOrExpression:
    | ConditionalAndExpression 
    | ConditionalOrExpression OrOperator ConditionalAndExpression

ConditionalAndExpression:
    InclusiveOrExpression 
    | ConditionalAndExpression AndOperator InclusiveOrExpression

InclusiveOrExpression:
    ExclusiveOrExpression 
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression

ExclusiveOrExpression:
    AndExpression 
    | ExclusiveOrExpression CircumFlex AndExpression

AndExpression:
    EqualityExpression 
    | AndExpression BitwiseAnd EqualityExpression

EqualityExpression:
    RelationalExpression 
    | EqualityExpression EqualToEqualTo RelationalExpression 
    | EqualityExpression NotEqualTo RelationalExpression

RelationalExpression:
    ShiftExpression 
    | RelationalExpression LessThan ShiftExpression 
    | RelationalExpression GreaterThan ShiftExpression 
    | RelationalExpression LessThanEqualTo ShiftExpression 
    | RelationalExpression GreaterThanEqualTo ShiftExpression 
    | InstanceofExpression

InstanceofExpression:
    RelationalExpression Instanceof ReferenceType 
    | RelationalExpression Instanceof Pattern

ShiftExpression:
    AdditiveExpression 
    | ShiftExpression LeftShit AdditiveExpression 
    | ShiftExpression RightShift AdditiveExpression 
    | ShiftExpression TripleGreaterThan AdditiveExpression

AdditiveExpression:
    MultiplicativeExpression 
    | AdditiveExpression Addition MultiplicativeExpression 
    | AdditiveExpression Substraction MultiplicativeExpression

MultiplicativeExpression:
    UnaryExpression 
    | MultiplicativeExpression Product UnaryExpression 
    | MultiplicativeExpression Divide UnaryExpression 
    | MultiplicativeExpression Modulo UnaryExpression

UnaryExpression:
    PreIncrementExpression 
    | PreDecrementExpression 
    | Addition UnaryExpression 
    | Substraction UnaryExpression 
    | UnaryExpressionNotPlusMinus

PreIncrementExpression:
    PlusPlus UnaryExpression

PreDecrementExpression:
    MinusMinus UnaryExpression

UnaryExpressionNotPlusMinus:
    PostfixExpression 
    | Tilde UnaryExpression 
    | NotOperator UnaryExpression 
    | CastExpression 
    | SwitchExpression

PostfixExpression:
    Primary 
    | ExpressionName 
    | PostIncrementExpression 
    | PostDecrementExpression

PostIncrementExpression:
    PostfixExpression PlusPlus

PostDecrementExpression:
    PostfixExpression MinusMinus

CastExpression:
    LeftParanthesis PrimitiveType RightParanthesis UnaryExpression 
    | LeftParanthesis ReferenceType AdditionalBound_ntM RightParanthesis UnaryExpressionNotPlusMinus 
    | LeftParanthesis ReferenceType AdditionalBound_ntM RightParanthesis LambdaExpression 

SwitchExpression:
    Switch LeftParanthesis Expression RightParanthesis SwitchBlock

ConstantExpression:
    Expression

VariableAccess :
    Expression
    | ArrayInitializer

InterfaceDeclaration :
    __EMPTY__

Annotation :
    __EMPTY__

NormalInterfaceDeclaration :
    __EMPTY__


%%

int yyerror(char *s)
{
    printf("%s\n",s);
    return 0;
}

struct Tree_node* makeleaf(char* Tree_nodeStr){
    //printf("%s\n",Tree_nodeStr);
    struct Tree_node* leaf = (struct Tree_node*)malloc(sizeof(struct Tree_node));
    leaf->data = Tree_nodeStr;
    for(int i = 0; i<10; i++){
        leaf->arr[i] = NULL;
    }
    return leaf;
}

struct Tree_node* makeInternalnode(char* rule, struct Tree_node* memArr[], int mem){
    struct Tree_node* internalTree_node = (struct Tree_node*)malloc(sizeof(struct Tree_node));
    internalTree_node->data = rule;
    for(int i = 0; i<mem; i++){
        internalTree_node->arr[i] = memArr[i];
    }
    for(int i = mem; i<10; i++){
        internalTree_node->arr[i] = NULL;
    }
    return internalTree_node;
}

void ast_print(struct Tree_node* root, int d){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    printf("\n");
    int i =0;

    while(root->arr[i]!= NULL){
        for(int i = 0 ; i<=d+1; i++)
            printf("\t");
        ast_print(root->arr[i],d+1);
        i++;

    }
}


void neighbour_append(struct Tree_node* root,FILE* graph, int depth,int child_num){
    if(root->arr[0]!= NULL){
        fprintf(graph, "\t%s_%d_%d ->{ %s_%d_0",root->data,depth,child_num,(root->arr[0])->data, depth+1);
    }
    else{
        fprintf(graph, "\t%s_%d_%d ->{}\n",root->data,depth,child_num);
        return;
    }
    for (int i=1 ; i< 10; i++){
        if(root->arr[i] != NULL){
            fprintf(graph," ,%s_%d_%d",(root->arr[i])->data,depth+1,i);
        }
        else{
            fprintf(graph,"}\n");
            return;
        }
    }
    fprintf(graph,"}\n");
    return;
}

void graph_maker(struct Tree_node* root,FILE* graph,int depth,int child_num){
    
    if(root!=NULL){
        neighbour_append(root,graph,depth,child_num);
        for(int i = 0; i<10 && root->arr[i]!=NULL; i++){
            graph_maker(root->arr[i], graph,depth+1,i);
        }

    }
    return;
    

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
